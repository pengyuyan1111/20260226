#include<stdio.h>
int mainzy4()
{
	//面向过程
	//1 变量——存储思维
	int a = 2,b=6,c=0,d=0;
	//2 键盘输入——scanf
	scanf_s("%d%d%d%d",&a,&b,&c,&d);
	//3 算法处理
	int t;
	//t = a; a = b; b = t;
	t = a; a = b;b = c; c = d; d = t;
	//4结果输出_printf_模板思维
	printf("%d %d %d %d\n",a,b,c,d);
	return 0;
}