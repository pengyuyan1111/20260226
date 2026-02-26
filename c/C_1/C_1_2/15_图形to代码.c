#include <stdio.h>
 int main15()
{
	int num = -15631;
	int count = 0;
	do
	{
		num /= 10;
		count++;
	} while (num!=0 );
	printf("%d\n",count);
	return 0;
} 