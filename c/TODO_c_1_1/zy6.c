#include<stdio.h>
int main8()
{
	//面向过程
//1 变量——存储思维
	int n = 0;
//2 键盘输入——scanf
	printf("输入4位数");
	scanf_s("%4d",&n);
//3 算法处理
	int q, b, s, g;
	q = n / 1000;
	b = n % 1000 / 100;
	s = n % 100 / 10;
	g = n % 10;
	int m = g * 1000 + s * 100 + b * 10 + q;
//4结果输出_printf_模板思维
	printf("%d%d\n",n,m);
	return 0;
}