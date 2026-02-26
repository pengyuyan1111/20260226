#include <stdio.h>
int main04()
{
	/* 1 三维数组的声明  */
	int arr[3][4][5] = {1,2,3,0};
	/* 2 三维数组的初始化  */
	/* 3.1 三维数组的遍历:三维数组名+下标  */
	 
	/* 3.2 三维数组的遍历:用int型变量的指针(列指针)  */
	int* pl = &arr[0][0][0];
	/*for (int m=0 ;m<3 ;m++ )
	{
		for (int h = 0;h < 4;h++)
		{
			for (int k = 0;k < 5;k++)
			{
				printf("%d ",*pl++);
			}
			printf("\n");
		}
		printf("\n");
	}*/
	/* 3.3 三维数组的遍历:用int型指向一维数组的指针（行指针）  */
	int(*ph)[5] =&arr[0][0];
	/*for (int m = 0;m < 3;m++)
	{
		for (int h = 0;h < 4;h++)
		{
			for (int k = 0;k < 5;k++)
			{
				printf("%d ",  (*ph)[k]);
			}
			ph++;
			printf("\n");
		}
		printf("\n");
	} */
	/* 3.4 三维数组的遍历:用int型指向二维数组的指针（平面指针）  */
	int(*pm)[4][5]= &arr[0];//arr
	for (int m = 0;m < 3;m++)
	{
		for (int h = 0;h < 4;h++)
		{
			for (int k = 0;k < 5;k++)
			{
				printf("%d ",  (*pm)[h][k]);
			}
			printf("\n");
		}
		pm++;
		printf("\n");
	}
	/* 3.5 三维数组的遍历:用int型指向三维数组的指针（立体指针）  */
	int(*pt)[3][4][5]=&arr;

	return 0;
}