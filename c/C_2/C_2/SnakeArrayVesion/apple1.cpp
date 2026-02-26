#include "apple1.h"
#include<stdlib.h>
#include<graphics.h>
int appX = 5;
int appY = 4;
IMAGE imageApple;
//定义
void newapple(void)
{
	appX = rand() % 17 + 1;
	appY = rand() % 17 + 1;
}
void initapple(void) {
	loadimage(&imageApple, L".\\she\\apple.bmp");
}
//展示苹果
void showapple(void) {
	putimage(appX * 30, appY * 30, &imageApple);
}