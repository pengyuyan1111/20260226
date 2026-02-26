#include <stdio.h>
int main05 ()
{
 
	/*
	 多级指针又称为：指向指针的指针。
	*/

	int a = 5;
	int* p =&a;//一级指针
	int** pp = &p;//二级指针——常规到二级就比较复杂了
	int*** ppp = &pp;
	printf("%d\n",***ppp);
 
	return 0;
}