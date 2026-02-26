#include "ren.h"
#include"banzi.h"
#include <graphics.h>
int manX=0;//人的x坐标
int manY=0;
IMAGE imgMan;
int testHit(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2);
void initRen(void)
{
	manX = boardXs[0] + 30;// 人初始化要站在第0个板子上
	manY = boardY - 30;
}
void renTu(void) {
	loadimage(&imgMan, L".\\images\\man.PNG");
}

void showRen(void) {
	putimage(manX, manY, &imgMan);
}

int renStand(void) {
	//假设人每站在任何的板子上
	int i;
	for (i = 0; i < 100; i++)
	{
		if (testHit(manX, manY, 32, 30, boardXs[i], boardY + i * 50, 95, 15))
		{
			return  1;
		}
	}
	return 0;
}

void renUp(void) {
	manY -= 5;
}

void renDown(void) {
	manY += 5;
}

int renChuJie(void) {
	return  (manY < 70 || manY>420);
}

void renLeft(void) {
	if (manX > 40)
	{
		manX -= 10;
	}
	else
	{
		manX = 40;
	}
}

void renRight(void) {
	if (manX < 390)
	{
		manX += 10;
	}
	else
	{
		manX = 390;
	}

}