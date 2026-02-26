#include <stdio.h>
int main()
{
	int a = 5;
	int* p = &a;
	char* c = &a;
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(c));
	return 0;
}