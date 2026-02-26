#include "snake.h"
#include"apple.h"
FANG_XIANG fangXiang = UP; 
int snakeSize = 5;//蛇 当前的大小
int snakeLie[100] = { 10,10,10,10,10 };
int snakeHang[100] = { 10,11,12,13,14 };

void snakeMove(void)
{
	//身体动
	for (int j = snakeSize - 1;j >= 1;j--)
	{
		snakeHang[j] = snakeHang[j - 1];
		snakeLie[j] = snakeLie[j - 1];
	}
	//头动
	switch (fangXiang)
	{
	case RIGHT:
		snakeLie[0]++;
		break;
	case UP:
		snakeHang[0]--;
		break;
	case LEFT:
		snakeLie[0]--;
		break;
	case DOWN:
		snakeHang[0]++;
		break;
	}
}

void snakeGrow(void)
{
	snakeSize++;
}
int enabledEatApple(void)
{
	return  snakeHang[0] == appleHang
		&& snakeLie[0] == appleLie;
}
int enabledOut(void)
{
	return  snakeHang[0] == 0 || snakeHang[0] == 19
		|| snakeLie[0] == 0 || snakeLie[0] == 19;
}
int enabledEatSelf(void)
{
	//int neng = 0;//假设 不能咬到自己
	for (int j=1  ; j<snakeSize; j++)
	{
		if (snakeHang[0] == snakeHang[j]
			&& snakeLie[0]==snakeLie[j]) 
		{
			//neng = 1;//推翻假设
			//break;
			return 1;
		}
	}
	return 0;
}


/*左转*/
void turnLeft(void)
{
	if (fangXiang != RIGHT)
	{
		fangXiang = LEFT;
	}
}
/*右转*/
void turnRight(void)
{
	if (fangXiang != LEFT)
	{
		fangXiang = RIGHT;
	}
}
/*上转*/
void turnUp(void)
{
	if (fangXiang != DOWN)
	{
		fangXiang = UP;
	}
}
/*下转*/
void turnDown(void)
{
	if (fangXiang != UP)
	{
		fangXiang = DOWN;
	}
}

IMAGE imgHead [4];
IMAGE imgBody;
/*初始化 蛇*/
void initSnake(void)
{
	TCHAR str[100];
	for (int t = 0; t < 4; t++)
	{
		_stprintf(str, L".\\she\\head%d.bmp", t);
		loadimage(&imgHead[t], str);
	}
	loadimage(&imgBody, L".\\she\\body.bmp");
}
/*显示蛇 */
void showSnake(void)
{
	putimage(snakeLie[0] * 30, snakeHang[0] * 30, &imgHead[fangXiang]);
	for (int i = 1;i < snakeSize;i++)
	{
		putimage(snakeLie[i] * 30, snakeHang[i] * 30, &imgBody);
	}
}