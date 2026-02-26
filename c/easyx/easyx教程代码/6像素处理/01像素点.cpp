#include <graphics.h>//包含：图像库头文件
#include <stdio.h>
int main01()
{
	initgraph(300, 400,EW_SHOWCONSOLE);//创建300*400的窗口
	//设置一个像素点的颜色
	putpixel(100, 100, 0xaabbcc);

	printf("%x\n",getpixel(100, 100));

	system("pause");//暂停: 避免窗口自动关闭
	return 0;
}