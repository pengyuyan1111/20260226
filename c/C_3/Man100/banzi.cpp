#include "banzi.h"
#include<graphics.h>
int boardXs[100] = {0};//每个板子的x坐标

int boardY = 300;//首个板子距离顶端的距离
IMAGE imgBoard;
void initBanZi(void)
{
	int i;
	for (i = 0; i < 100; i++)
	{
		boardXs[i] = rand() % 290 + 40;
	}
}
void showBanZi(void) {
	int i;
	for (i = 0; i < 100; i++)
	{
		putimage(boardXs[i], boardY + i * 50, &imgBoard);
	}
}

void banZiUp(void) {
	boardY -= 5;
}

void banZiTu(void) {
	loadimage(&imgBoard, L".\\images\\board.PNG");
}

