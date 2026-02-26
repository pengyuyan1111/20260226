#include<stdio.h>
int mainbl()
{
	//面向过程
	//1 先创建（定义·声明）后使用
	int money = 0;//初始值
	//赋值：覆盖原有值
	money = 500;
	//取值
	printf("%d\n",money);
	//增值
	money = money + 800; //不太专业的写法
	//+=  -= *= /= %=
	money += 100;	//建议：用 复（多）合（并）赋值
	printf("%d\n", money);
	//微增长  ++   --
	money++;
	++money;
	return 0;
}