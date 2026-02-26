#include<stdio.h>
int main14 ()
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
	逻辑非 not ! 逻辑与(并且) and  &&  逻辑或or ||
	*/
	//printf("%d\n",!!8);
	////逻辑与(并且) and : 全真则真  有假就假
	//printf("%d\n",3>8 && 6<7);
	//printf("%d\n", 3  && 6 );
	//printf("%d\n",  0 && 6);
	//printf("%d\n", 7 && 0);
	//printf("%d\n", 0 && 0);
	////逻辑或or ||: 有真则真  全假就假
	//printf("%d\n", 3 || 6);
	//printf("%d\n", 0 || 6);
	//printf("%d\n", 7 || 0);
	//printf("%d\n", 0 || 0);

	/*
	&& || 的短路问题
	*/
	int a = 10, b = 10;

	//printf("%d\n", a++>10 && b--<10);
	//printf("%d\n", a++ > 10 || b-- < 10);
	printf("%d\n", a++ >= 10 || b-- < 10);
	printf("a=%d b=%d\n",a,b);
	return 0;
}