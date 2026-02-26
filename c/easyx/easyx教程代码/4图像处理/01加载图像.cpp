#include <graphics.h>//包含：图像库头文件
int main()
{
	initgraph(400, 400);//创建300*400的窗口
	//按图片默认大小加载
	IMAGE img1;
	loadimage(&img1, L".\\image\\金鲨_0.png");//从硬盘任意位置加载图像，并默认图像大小 
	putimage(10, 20, &img1);
	// 图片等比缩放加载
	IMAGE img2;
	loadimage(&img2, L".\\image\\金鲨_0.png", 100, 50, false);//从硬盘任意位置加载图像，并按100宽50高的像素空间缩放。  false代表等比缩放 不拉伸
	putimage(10, 180, &img2);

	// 图片拉伸加载
	IMAGE img3;
	loadimage(&img3, L".\\image\\金鲨_0.png", 100, 100, true);//从硬盘任意位置加载图像，并按100宽50高的像素空间缩放。  true代表拉伸
	putimage(10, 250, &img3);


	system("pause");//暂停: 避免窗口自动关闭
	return 0;
}