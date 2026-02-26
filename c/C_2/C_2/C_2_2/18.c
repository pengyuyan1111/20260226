#include<stdio.h>
#include<stdlib.h>
int main18()
{
	int ds[20]  ;
	int i,j;
	int len=sizeof(ds)/sizeof(ds[0]);

	for(i=0;i<len;i++)
	{
		ds[i]=rand()%100;
		printf("%d,",ds[i]);
	}
	printf("\n");
	/*对数组成员 按 从小到大的顺序进行排序*/
	for (int suo=0 ; suo<len-1;suo++ )
	{
		for (int bi=suo+1 ;bi<len ;bi++ )
		{
			if (  ds[suo] >ds[bi])
			{
				int t;
				t = ds[suo];  ds[suo] = ds[bi]; ds[bi] = t;
			}
		}
	}
	//遍历数组
	for (int i=0 ;i<len ; i++)
	{
		printf("%d ",ds[i]);
	}

	return 0;
}