#include <stdio.h>
int main()
{
	////分析下面代码的执行结构，并通过调试器进行验证
	//int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
	//int*ptr1=(int*)(&aa+1);
	//int *ptr2=(int*)( *(aa+1) );
	//printf("%d,%d\n",*(ptr1-1),*(ptr2-1));

	/*unsigned char endian[2] = { 1,2 };
	short x;
	x = *(short*)endian;
	printf("%hx\n", x);*/
	long long n = 0;
	char cs[8];
	*(long long*)cs = 0x9LL;
	((char*)&n)[2] = 0xff;

	return 0;
}