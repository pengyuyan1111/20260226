#include "snkae1.h"
#include"apple1.h"
#include<graphics.h>
//全局变量
int FX = 1;// 0 右    1 上    2 左    3 下
int snakeY[100] = { 10,11,12,13,14 };
int snakeX[100] = { 10,10,10,10,10 };
int snakesize = 5;
IMAGE imageHead[4];
IMAGE imgBody;
//函数声明
void snakeMove(void)
{
	//身体爬
	for (int i = snakesize - 1; i >= 1; i--) {
		snakeX[i] = snakeX[i - 1];
		snakeY[i] = snakeY[i - 1];
	}

	//头爬
	switch (FX) {
	case 0:
		snakeX[0]++;
		break;
	case 1:
		snakeY[0]--;
		break;
	case 2:
		snakeX[0]--;
		break;
	case 3:
		snakeY[0]++;
		break;
	}

}

int canEat(void)
{
	return snakeX[0] == appX && snakeY[0] == appY;
}

void grow(void)
{
	snakeX[snakesize] = -1;
	snakeY[snakesize] = -1;
	snakesize++;
}

int canOut(void)
{

	return snakeX[0] == 0 || snakeX[0] == 19 || snakeY[0] == 0 || snakeY[0] == 19;
}


void turnLeft(void)
{
	if (FX != 0) {
		FX = 2;
	}
}
void turnRight(void) {
	if (FX != 2) {
		FX = 0;
	}
}

void turnUp(void) {
	if (FX != 3) {
		FX = 1;
	}
}

void turnDown(void) {
	if (FX != 1) {
		FX = 3;
	}
}

int canEatSelf(void)
{
	for (int i = 1; i < snakesize - 1; i++) {
		if (snakeX[0] == snakeX[i] && snakeY[0] == snakeY[i]) {
			return 1;
		}
	}
	return 0;
}

void initsnake(void) {
	TCHAR str[100];

	for (int i = 0; i < 4; i++) {
		_stprintf(str, L".\\she\\head%d.bmp", i);
		loadimage(&imageHead[i], str);
	}

	loadimage(&imgBody, L".\\she\\body.bmp");

}

void showsnake(void) {
	putimage(snakeX[0] * 30, snakeY[0] * 30, &imageHead[FX]);
	for (int j = 1; j < snakesize; j++) {
		putimage(snakeX[j] * 30, snakeY[j] * 30, &imgBody);
	}
}