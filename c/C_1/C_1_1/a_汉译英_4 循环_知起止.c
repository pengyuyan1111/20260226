#include <stdio.h>


/* 中高风险密接的人——隔离期 */
int main4()
{
	 //int days ;
	 //for(days=1; days<=14+7;days++)
	 //{
		// printf("隔离第%d天\n",days);
	 //}
	 int days=1;
	 for ( ; /*死循环*/;)
	 {
		 days <= 14 + 7;
		 printf("隔离第%d天\n", days);

		 days++;
	 }
	return 0;
}