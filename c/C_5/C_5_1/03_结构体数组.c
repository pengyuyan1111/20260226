#include <stdio.h>
/*定义一个结构体*/
 //场景： 书 
//方式2
typedef struct book
{
	char bookName[30];
	char writer[20];
	double price;
	int year;
} BOOK;
//方式1
//typedef struct book BOOK;
int main03  ()
{
	/*创建结构体数组变量—— 书架里的数*/
	//int arr[4] = {1,2,3,4};
	BOOK books[4] = { {"C语言从入门到放弃","谭浩强",28.5,1998},
					  {"活着","余华",18.6,2000},
		              {"三体","刘慈欣",58.6,2000},
		              {"论持久战","毛主席",49.6,2000}
	
						};
	/*为结构体成员赋值 用.操作符*/
	for (int suo=0 ;suo<4-1 ;suo++ )
	{
		for (int bi=suo+1 ; bi<4; bi++)
		{
			if (  books[suo].year  < books[bi].year
				|| books[suo].year == books[bi].year
					&& books[suo].price< books[bi].price
				)
			{
				BOOK t;
				t = books[suo];books[suo] = books[bi]; books[bi] = t;
			}
		}
	 }


	//遍历结构体数组
	for (int i=0 ;i<4 ;i++ )
	{
		printf("%-20s %-8s %6.2f %6d\n",books[i].bookName
							,books[i].writer
							,books[i].price,books[i].year);
	}

	return 0;
}