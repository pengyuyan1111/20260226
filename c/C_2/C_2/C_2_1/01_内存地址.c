#include <stdio.h>
int main01()
{
	//1 什么是内存地址
	int a=5;
	//2 地址相关运算：&取变量所占字节的首地址  * 根据地址取值
	//printf("地址方式：%p\n",&a);
	//printf("十进制方式：%d\n", &a);

	printf("%d\n",a);
	printf("%d\n", *&a);
	return 0;
}