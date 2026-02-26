#include <stdio.h>
/*
	判断一个人能否结婚：
	按法律：男年满22周岁 女年满20周岁
*/
int main205()
{
	int age = 18;
	int sex = 1;
	if (sex==1)
	{
		if (age>=22)
		{
			printf("男 能");
		 }
		else
		{
			printf("男 不能");
		}
	}
	else
	{
		if (age>=20)
		{
			printf("女 OK");
		}
		else
		{
			printf("女 不 OK");
		}


	}
	 
	return 0;
} 