#include<stdio.h>
int main()
{
	//手误了
	//int a = 10;
	//while (a > 1)
	//	;//空语句——成了循环体
	//{
	//	printf("%d\n",a);
	//	a--;
	//}
	//需要的死循环
	//while ( 1)//非0 即 真
	//{
	//	printf("为人民服务。。");
	//}
	//for ( ;  ; )
	//{
	//	printf("为人民服务。。");
	//}
	// 行标记：名 冒号
	hh: printf("为人民服务。。");
	goto hh;//跳转到行标记
	return 0;
}