#include<stdio.h>
int main ()
{
	/*
	运算表达式的基本概念：
	1：运算符
	2：操作数
	3：表达式
	4：结合性 
	5：优先级
	*/
	/*
	牢记：只要是表达式 就有一个计算结果
	*/


	/*
	 按位 与 & 
	*/
	printf("%hhx\n",0b00001010
				   &0b00000101);
	/*
	 按位 或| 
	*/
	printf("%hhx\n", 0b00001010
					|0b00000101);
	/*
	 按位 取反~   !相反逻辑   -相反数
	*/
	char m = -1; 
	printf("%hhx\n",  ~m);
	/*
	 按位 异或 ^ 
	*/
	printf("%hhx\n", 0b10101010
					^0b01010101);
	/*
	 按位 左移<< 
	*/
	int n = 10;
	printf("%d\n", n << 2);
	/*
	 按位 右移>> 
	*/
	printf("%d\n", n >> 2);
	printf("%d\n",-1 >> 3);
	printf("%hhx\n",(unsigned char) -1 >> 4);//0000 1111   
	return 0;
}