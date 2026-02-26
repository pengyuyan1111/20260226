#include <graphics.h>//包含：图像库头文件
#include <stdio.h>
int main02 ()
{
	initgraph(300, 400, EW_SHOWCONSOLE);//显示控制台
	//5秒后自动关闭窗口
	for (int i=1;i<=5;i++)
	{
		printf("%d\n", i);
		Sleep(1000);
	}
	closegraph();
	

	system("pause");//暂停: 避免窗口自动关闭
	return 0;
}