#include <stdio.h>
/*
 参数：
 n：当前碟子数
 from：从哪里拿
 mid：暂时不用的柱子
 to：放到哪里去
*/
void fun14(int n, char from,char mid,char to);
int main14 ()
{

	/* 汉诺塔 */

	fun14(3, 'a','b','c');
	return 0;
}
void fun14(int n, char from,char mid,char to)
{
	if (n == 1) {
		printf("%c--> %c", from, to);
		return;
	}
	fun14(n - 1, from, to, mid);
	printf("%c--> %c", from, to);
	fun14(n - 1, mid, from, to);

}