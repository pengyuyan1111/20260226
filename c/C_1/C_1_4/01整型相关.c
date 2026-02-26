/*
  知识点列表：
  1 类型关键字*
  2 命名规范
  3 字面值后缀*
  4 字节大小*与数据范围
  5 溢出现象
  6 进制转换*
  7 内存存储原理：原码 反码 补码 
  8 左值 右值
  9 八进制 十六进制字面值*
  10 打印格式
*/
#include<stdio.h>
int main01 ()
{
	//signed int iValue = 9;
	//printf("signed int 字节数:%d %d %d\n",sizeof( int),sizeof(iValue),sizeof(9));
	//unsigned int uiValue=9u;
	//printf("unsigned int 字节数:%d %d %d\n", sizeof(unsigned ), sizeof(uiValue), sizeof(9u));
	//signed long int lValue = 9L;
	//printf("signed long int 字节数:%d %d %d\n", sizeof( long ), sizeof(lValue), sizeof(9L));
	//unsigned long int ulValue=95ul;
	//signed long long int llValue = 95ll;
	//printf("signed long long int 字节数:%d %d %d\n", sizeof( long long ), sizeof(llValue), sizeof(9LL));
	//unsigned long long int ullValue = 95ull;

	//signed short int sValue=9;//小于int 按int
	//printf("signed short int 字节数:%d %d %d\n", sizeof(short), sizeof(sValue), sizeof(9));

	//unsigned short int usValue=9u;

	//signed char cValue = 'A';
	//printf("signed char 字节数:%d %d %d\n", sizeof(char), sizeof(cValue), sizeof('A'));

	//unsigned char ucValue=48u;
	//整型的 字面值常量
	//格式：  进制前缀  字面值  类型后缀
	//0b1011011;//0b开头是 二进制表示
	//0356;//0开头： 八进制
	//0x2fb;//0x开头：十六进制
	//1234;//默认十进制
	//printf("有符号十进制 %d 八进制%o 十六进制%x\n",185,185,185);
	//int age = 5;
 
	//char a = -16;
	//char b = -5;
	//char c = -16 - 5;
	//printf("4个字节的长度打印：%d %u\n",c,c);//长度不足 补符号位的数
	//printf("1个字节的长度打印：%hhd %hhu\n", c, c);

	//unsigned char aa = -1;
	//signed char bb = -1;
	//printf("%hhd %hhd\n",aa/2,bb/2);

	//利用 溢出现象  计算整型的数据范围
	unsigned char aa = -1;
	printf("%hhu %hhd %hhd\n", aa,aa/2, aa/2+1);
	
	unsigned short b = 0xffff;
	printf("%hu %hd %hd\n",b,b/2,b/2+1);
	 
	unsigned long long d = -1LL;
	printf("%llu %lld %lld\n",d,d/2,d/2+1);
 
	return 0;
}