#include<stdio.h>
int mainzy5()
{
	//面向过程
//1 变量——存储思维
	double r = 0.0;//半径
//2 键盘输入——scanf
	printf("输入半径：");
	scanf_s("%lf",&r);
//3 算法处理 
	double v = 4. / 3 * 3.14 *( r *r*r);
//4结果输出_printf_模板思维
	printf("体积是%.2f\n",v);

	return 0;
}