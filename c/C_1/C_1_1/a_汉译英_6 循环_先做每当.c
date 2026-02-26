#include <stdio.h>


/* 模拟上班族的一个月 */
int main6()
{
	int workDay=0;

	do
	{
		//workDay -= 1;
		workDay--;
		printf("距离发工资还有%d天\n",workDay);
	}while(workDay>=1);
	
	return 0;
}