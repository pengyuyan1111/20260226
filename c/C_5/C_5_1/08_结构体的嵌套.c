#include <stdio.h>
 //分体
//typedef struct book
//{
//	int price;
//	char* name;
//} Book;
//typedef struct  
//{
//	int age;
//	char *name;
//	Book book;
//}  Student;
//嵌套合体
typedef
struct
{
	int age;
 
	char* name;
	struct //嵌套结构——通常表达 包含的数据关系
	{
		 int price;
		char* name;
	} book;
}  Student;

//球队：教练组  球员
struct team
{
	struct jl
	{
		char name[20];
		int zjsc;
	}  jlz [3];
	struct qy
	{
		char name[20];
		int h;
		int w;
		char sizhi[10];
		struct
		{
			char ming[30];
			int year;
		} rongyu[3];
	} qys[10];
}   ;
int main08 ()
{
	struct team t1;
	Student s={  20,"张三",{12,"如来神掌"} };
	
	printf("书名：%s\n",s.book.name);//得到嵌套结构体内的成员，继续  .  运算
	printf("价格：%d\n",s.book.price);
	return 0;
}