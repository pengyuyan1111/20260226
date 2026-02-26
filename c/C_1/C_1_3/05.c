#include <stdio.h>
#include <math.h>
/*
打印n以内的所有素数

*/
int main5  ()
{
	int n = 0;
	printf("输入n：");
	scanf_s("%d",&n);
	for ( int num=2; num<n; num++)
	{
		//如果是 素数 才需要 打印
		//标识位
		//int flag = 1;//假设 是素数
		//for (int ys=2 ;ys<num ;ys++ )
		//{
		//	if ( num % ys ==0)//找到一个因数
		//	{
		//		flag = 0;//推翻假设
		//		break;//中途结束循环
		//	}
		//}
		//if (flag==1)
		//{
		//	printf("%d\n", num);
		//}

		int ys = 2;
		double pfg = sqrt(num);
		for (;ys <= pfg;ys++)
		{
			if (num % ys == 0)//找到一个因数
			{
				break;//中途结束循环
			}
		}
		if (!(ys <= pfg) )
		{
			printf("%d\n", num);
		}
		
	}

	return 0; 
}