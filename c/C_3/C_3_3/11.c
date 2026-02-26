#include <stdio.h>
int fun11(int m,int n);
int main11 ()
{
	/* 递归实现：两个正整数的最大公约数 */
	 printf("%d\n",fun11(124,36 ));
	 //printf("124 求余 36 = %d\n",124%36);
	 //printf("36 求余 16 = %d\n", 36 % 16);
	 //printf("16 求余 4 = %d\n", 16 % 4);
	return 0;
}

int fun11(int m,int n)
{
	//终止条件
	if (m%n==0)
	{
		return n;
	}
	//传递逻辑
	return fun11(n, m % n);
}