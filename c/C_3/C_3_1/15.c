#include <stdio.h>
#include<math.h>
//语法：声明  分工：设计规划
/*
  判断是否是 素数
  参数：一个整数
  返回：0 不是  1是
*/
int isSu(int n);
int main15 ()
{

	/* 编写函数： 判断一个数是否是素数*/
	/* 调用素数函数 打印出20以内所有的素数*/
	for (int s=2 ;s<20 ;s++ )
	{
		//2 场景测试
		if ( isSu(s))
		{
			printf("%d\n",s);
		}
	 }
	return 0;
}

int isSu(int n)
{
	double pfg = sqrt(n);
	for (int ys=2 ;ys<=pfg ;ys++ )
	{
		if (n%ys==0)
		{
			return 0;//提前结束调用
		}
	}
	return 1;
}