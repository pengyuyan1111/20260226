#include <stdio.h>
int fun13(int n);
int main13 ()
{

	/*用递归算法实现斐波那契数列： */
	/*double n1, n2, nn;
	int i;
	n1 = n2 = 1;
	printf("%.f,%.f,", n1, n2);
	for (i = 3; i <= 50; i++)
	{
		nn = n1 + n2;
		printf("%.f,", nn);
		n1 = n2;
		n2 = nn;

	}*/

	/* int i;
	 for(i=1;i<=50;i++)
	 {
		 printf("%d,",fun13(i));
	 }*/
	fun13(30);
	return 0;
}
int fun13(int n)
{
	static int count = 0;
	count++;
	printf("%d ",count);
	 //终止条件
	if (n==1||n==2)
	{
		return 1;
	}
	//递推逻辑
	return fun13(n-1) + fun13(n-2);
}
