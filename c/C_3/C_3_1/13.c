#include <stdio.h>
int fun13(int a[],int len);//声明 状态
int main13 ()
{

	/* 3.编写一个函数，返回一个int数组中最大的元素的值 */

	int a[]={1,5,6,9,8,1,4,5};
	printf("%d\n",fun13(a, sizeof(a)/sizeof(a[0])));//调用状态
	return 0;
}

int fun13(int a[],int len)//定义状态
{
	int max = a[0];
	int i;
	for(i=1;i<len;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}