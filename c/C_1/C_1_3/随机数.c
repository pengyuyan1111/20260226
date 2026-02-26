#include<stdio.h>
#include<stdlib.h>//标准库——常用功能
#include<time.h>
int mainsss()
{
	time_t t = time(NULL);
	printf("%lld\n",t);
	//设置随机种子数 seed
	srand((unsigned)t);//set 设置 种子数——用时间作参数

	//36选5
	int sj = rand()%36+1;
	printf("%d\n",sj);
	printf("%d\n", rand() % 36 + 1);
	printf("%d\n", rand() % 36 + 1);
	printf("%d\n", rand() % 36 + 1);
	printf("%d\n", rand() % 36 + 1);


	return 0;
}