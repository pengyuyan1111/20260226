#include <stdio.h>
/*
有一只青蛙掉入一口深 10 米的井中。每天白天这只青蛙跳上 4 米晚上又滑下 3 米, 
问：这只青蛙经过多少天可以从井中跳出?
*/
int main  ()
{
	//创建变量——存储思维
	int high=0;//爬的高度
	int state=1;//state——状态 标识状态： 1白天  0黑天
	int count = 0;
	//逻辑过程
	do
	{
		if (  state==1 )
		{
			high += 5;//不同状态下的 逻辑处理
			state = 0;//状态转换
			count++;
		}
		else
		{
			high -= 4;
			state = 1;
		}

	} while ( high<10);
	printf("%d\n",count);
	//结果打印
	return 0;
} 