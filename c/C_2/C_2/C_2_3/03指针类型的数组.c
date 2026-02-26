#include <stdio.h>
int main03 ()
{
	int a=1,b=2,c=3,d=4,i;
	// 指针类型 的 数组简称：指针数组。 每个数组成员都是指针变量。
	//int *p[4]={ };
	//基本类型 的 数组
	int arr[4] = {7,8,9,6};//int [4]  一维数组类型 4个整数的 类型
	 
	int* pa[4] = { &a,arr,arr+1, &arr[2] };
	int(*p)[4];
	 //利用 数组指针：访问 指向的 整数
	for (int i=0 ; i<4; i++)
	{
		printf("%d\n", *pa[i]);
	}
	return 0;
}