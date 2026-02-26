#include <stdio.h>
 //1 规划·设计   语法：前置声明
/*得到最大数的下标
参数：arr 数组位置
      len 数组长度
返回： 下标
*/
unsigned getMaxValueIndex(double arr[],int len);
int main14 ()
{

	/* 4.编写一个函数，返回double数组中最大元素的下标 */
	double a[]={1,43.3,5.3,55.6,74.8,2.5};
	//2 场景测试
	int xb = getMaxValueIndex(a, 6);
	printf("最大值是 %.2f 其下标是 %u\n",a[xb],xb);

	return 0;
}

unsigned getMaxValueIndex(double arr[], int len)
{
	unsigned maxIndex = 0;
	for (int i=1 ;i<len ; i++)
	{
		if (  arr[maxIndex] <arr[i])
		{
			maxIndex = i;
		}
	}
	return maxIndex;
}
