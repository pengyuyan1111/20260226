//#include <stdio.h>
//#include"a.h"
//#include"b.h"
//#include"a.h"
//#include"b.h"
//#include"a.h"
//#include"b.h"
 
/*C 语言启动的经历：
	1：预处理期： 在这一阶段，源码中的所有预处理语句得到处理例如：#include语句所包含的文件内容替换掉语句本身，所有已定义的宏被展开。
	2：编译期：编译器对源码进行词法分析、语法分析、优化等操作，最后生成汇编代码。
	3：汇编期：生成机器语言代码，保存在后缀为.o的目标文件中
	4：链接期：经过汇编以后的机器代码还不能直接运行。为了使操作系统能够正确加载可执行文件，文件中必须包含固定格式的信息头，还必须与系统提供的启动代码链接起来才能正常运行，这些工作都是由链接器来完成的。
	5：执行期：执行.EXE文件，得到运行结果
	*/
#define MAX_LEN 500 
#define SUCCESS 0 
#define OUTof_MEMORY -1077777
int main21     ()
{
	/*宏替换简称宏的格式：
	#define 宏替换名称  替换内容
	*/
//	int a[MAX_LEN], b[MAX_LEN], c[MAX_LEN];

	/* 1 替换类型名称 对比typedef的差异*/
	//typedef int* PINT;
	//#define Pint int*
	//PINT p1, p2;
	//Pint q1, q2;
	/*2  替换一个函数或表达式*/
	//定义一个 宏
//#define PT printf("hello world");
	//使用宏
	//PT PT PT
	/*3 嵌套宏替换：不用循环的1000个helloworld*/
//#define A PT PT PT PT PT PT PT PT PT PT
//#define B A A A A A A A A A A 
//#define C B B B B B B B B B B 
//	C
	/*思考总结：宏的意义：增加可读性*/
	/*用宏和typedef创建一个“布尔型数据”*/
	//java语言：布尔类型  boolean sex = true;//false
	//int sex = 1;
//#define True  1 //用宏常量 标识 值
//#define False 0
//	typedef int boolean;
//	boolean sex = True;
	/*4 定义有参数的宏*/
	/*  定义能够计算任意类型数组长度的宏*/
	//写宏·函数时 请注意：
	//1 空格后为 替换内容 所以 宏名与参数直接不能有空格
	//2 替换的表达式存在 优先级被破坏的问题 建议用()保障优先级
#define ARR_LEN_1(arr)              (sizeof(arr) / sizeof(arr[0]))
#define ARR_LEN_2(array_name,array_type)   (sizeof(array_name) / sizeof(array_type))
	int arr[] = {1,3,6,9,8,2,2};
	//int len1 = sizeof(arr) / sizeof(arr[0]);
	int len1 = ARR_LEN_1(arr);
	int len2 = ARR_LEN_2(arr,int);
	//int len2 = sizeof(arr) / sizeof(int);
	double ns[] = {3.14,2.71828,0.618};
	//int len3 = sizeof(ns) / sizeof(ns[0]);
	//int len4 = sizeof(ns) / sizeof(double);
	int len3 = ARR_LEN_1(ns);
	int len4 = ARR_LEN_2(ns,double);
	return SUCCESS;
}