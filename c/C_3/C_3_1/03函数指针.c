#include <stdio.h>
#include<math.h>
int add_int(int a,int b);

int main  ()
{

	/*函数名字的本质： 代表函数在内存中的地址 */
	//printf("%p %p\n",add_int,&add_int);
	///*变量所代表的空间是为了存数据 */
	///*函数所代表的空间是为了执行代码 由于需要参数，需要增加() 代表执行此函数 */
	//printf("%d\n",add_int(4,5));
	             //函数被执行本质：
	              //1 通过函数名add_int 找代码区的位置
	              //2 通过()传入的实参 去执行代码区的指令
	/* 定义指向函数的指针变量 就可以调用内存中的函数代码 */	 
	////1 定义函数指针变量
	////数组指针的过程
	//int(*parr)[5];//数组特征int [5]
	////定义函数指针变量
	////去掉名字 保留类型的特征 ，函数名用(*)代替
	//int (* pfun)(int , int );
	//////指针的标准方式
	////int num=3;
	////int* p = &num;
	////*p = 5;//找到地址·得到空间  
	// //让函数指针 指向函数
	////显式
	///*pfun = &add_int;
	//printf("%d\n",(*pfun)(7,8));	*///让函数指针 执行函数
	////隐式(推荐)
	//pfun = add_int;
	//printf("%d\n",pfun(99,88) );	//让函数指针 执行函数

	//数学函数
	/*printf("平方根：%f\n",sqrt(2));
	printf("绝对值：%f\n", fabs(-2));
	printf("向上取整 ：%f\n",ceil(3.999)  );
	printf("向下取整 ：%f\n",floor(2.001));*/
	//double (*pmath)(double  ) = sqrt;

	//printf("平方根：%f\n", pmath(2));
	//pmath = fabs;
	//printf("绝对值：%f\n", pmath(-2));
	//pmath = ceil;
	//printf("向上取整 ：%f\n", pmath(3.999));
	//pmath = floor;
	//printf("向下取整 ：%f\n", pmath(2.001));
	//批量循环执行函数
	//批量管理参数们
	double can[4] = { 2,-2,3.999,2.001};
	//批量管理 地址们
	//函数 指针 数组
	//double (double)
	//double(*)(double)
	double(*pms[4])(double) = {sqrt,fabs,ceil,floor};
	for ( int i=0; i<4; i++)
	{
		printf("%f\n",pms[i]( can[i] ) );
	}
	return 0;
}

int add_int(int a,int b)
{
	int sum=0;
	sum=a+b;
	return sum;
}