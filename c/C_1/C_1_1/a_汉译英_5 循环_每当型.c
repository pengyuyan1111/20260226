#include <stdio.h>


/* 勤俭是一种美德 */
int main5()
{
	int money = 0;
	int low = 50;
	while(money>low)
	{
		//money = money - low;//业余
		money -= low;
		printf("还剩%d元钱\n",money);
	}
	return 0;
}