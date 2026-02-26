#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
人机猜数游戏

由计算机“想”一个四位数，请人猜这个四位数是多少。人输入四位数字后，计算机首先判断这四位数字中有几位是猜对了，并且在对的数字中又有几位位置  也是对的，将结果显示出来，给人以提示，请人再猜，直到人猜出计算机所想的四位数是多少为止

*/
int main()
{
	int num;
	srand((unsigned)time(NULL));//随机数初始化
	num= rand()%9000+1000;//产生随机的四位数
	int q, b, s, g;
	q = num / 1000;
	b = num % 1000 / 100;
	s = num % 100 / 10;
	g = num % 10;
	 
	int guess = 0;
	do
	{
		printf("输入四位数：");
		scanf_s("%d",&guess);
		int qq, bb, ss, gg;
		qq = guess / 1000;
		bb = guess % 1000 / 100;
		ss = guess % 100 / 10;
		gg = guess % 10;
		 
		printf("%c",q==qq  ?q+'0' : '*');//8   ‘8’
		printf("%c", b == bb ? b + '0' : '*');
		printf("%c",s == ss ? s + '0' : '*');
		printf("%c\n", g == gg ? g + '0' : '*');

	} while (guess!= num) ;
	printf("猜对了\n");

	return 0; 
}