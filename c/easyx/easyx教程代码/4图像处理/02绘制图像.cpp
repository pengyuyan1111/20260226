#include <graphics.h>//包含：图像库头文件
int main02 ()
{
 
	initgraph(300, 400);//创建300*400的窗口
	//按图片默认大小加载
	IMAGE img1;
	loadimage(&img1, L".\\image\\金鲨_0.png");//从硬盘任意位置加载图像，并默认图像大小 
	putimage(10, 20, &img1);
	//显示图片的某块区域
	                 //区域宽 区域高           区域内的x，y
	putimage(10, 150, 100,      60,     &img1, 200, 30);

	system("pause");//暂停: 避免窗口自动关闭
	return 0;
}