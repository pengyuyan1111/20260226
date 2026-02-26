#include <stdio.h>
 
struct AA 
{
	short c;
	int a; 
	char b; 
}  ;

struct HH  
{
	int a; 
	short c; 
	char b; 
	short d; 
	char e; 
	short f;
}  ;

struct HH2
{
	int a; 
	short c; 
	short d; 
	char e; 
	char b; 
	short f;
}  ;

struct FF1
{
	char a[5]; 
	char *e;
}  ;


int main05 ()
{
	//测试不同结构体的空间大小
	//printf("%d\n",sizeof(struct FF1));
	//printf("%d\n", sizeof(struct HH2));
	
	//结构对齐原则的启示 : 按对齐补齐原则排列成员顺序更好利用内存空间  

	//struct MM
	//{
	//	int a;
	//	double b;
	//	struct {
	//		char str[10];
	//		int age;
	//	} c;
	//	struct {
	//		char* ps[5];
	//	} d;
	//};

	//printf("%d\n", sizeof(struct MM));

	union TT
	{
		int a;
		double b;
		char c;
	};

	printf("%d\n", sizeof(union TT));
	return 0;
}