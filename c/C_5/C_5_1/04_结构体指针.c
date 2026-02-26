#include <stdio.h>
/*定义一个结构体*/
typedef struct book
{
	char bookName[30];
	char writer[20];
	double price;
	int year;
} BOOK,* P_BOOK ;
//typedef BOOK* P_BOOK;
int main04   ()
{
	/*创建结构体指针变量*/
	BOOK books[4] = { {"C语言从入门到放弃","谭浩强",28.5,1998},
					 {"活着","余华",18.6,2000},
					 {"三体","刘慈欣",58.6,2000},
					 {"论持久战","毛主席",49.6,2000} };
	//创建  结构体指针 变量
	struct book* p1 = books;
	BOOK* p2 =books+1;
	P_BOOK p3=&books[2];
	/*使用指针操作结构体成员 
	  
	 方式一：  (*指针).成员:   找到地址·得到空间
	 方式二：  指针 -> 成员
	 
	 */
	(*p1).year = 2025;//不推荐
	p2->year = 2024;//推荐：指针 直接指向-> 成员空间
	p3->year = 2023;
	return 0;
}