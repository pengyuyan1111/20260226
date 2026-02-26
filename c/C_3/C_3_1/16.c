#include <stdio.h>
#include<time.h>
/*
参数：n 整数
      a 指向一个数组空间
返回：向a指向的数组空间 放了几个因数
*/
int fun16(int n,int* a);
int main16 ()
{
	int a[100] ;
	int num = 100;
	int count =fun16(num, a);
	for (int i=0;i<count;i++) {
		printf("%d ",a[i]);
	}
	
	return 0;
}
int fun16(int n, int* a)
{
	int count = 0;
	for (int i = 1; i <= n/2; i++) {
		if (n%i==0) {
			a[count] = i;
			count++;
		}
	}
	a[count] = n;
	count++;
	return count;
}