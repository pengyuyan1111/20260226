#include<stdio.h>
int main04 ()
{
	printf("%d %g\n ",7/2,7./2);
	/*
	自动类型转换
	*/
	//1 存储到变量 以 变量类型为准
	int n = 3.14;//3
	double m = 89;//89.000
	//2 算术混合运算
	printf("%d\n",sizeof(3+9L+4LL+'a'));
	printf("%d\n", sizeof(3 + 9L + 4LL + 'a'+0.1f));
	printf("%d\n", sizeof(3 + 9L + 4LL + 'a' + 0.1f+0.));
	/*
	强制类型转换——人 要求 类型
	*/
	printf("%d\n", sizeof(3 + 9L + (int)4LL + 'a' +(short) 0.1f + (char)0.));
	//算术表达式的结果 以int为最小
	printf("%d\n", sizeof((char)3+(char)0.1 ));

 
	return 0;
}