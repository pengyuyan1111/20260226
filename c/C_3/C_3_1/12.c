#include <stdio.h>
int fun12(int a,int b);//前置声明
int main12()
{

	/* 2.编写一个函数，返回一个数到另外一个数之间所有整数相加的和 */

	 printf("%d\n",fun12(1,5));//调用

	return 0;
}
//定义
int fun12(int a,int b)
{	
//	return 666;//务必 在 条件限制下 使用
	int sum=0;
	if (a>b)
	{
		return 0;//提前结束了 函数调用
	}
	for(a++;a<b;a++)
	{
		sum+=a;
	}
	return sum;
}

