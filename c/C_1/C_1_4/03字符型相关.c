/*
  知识点列表：
  1 类型关键字
  2 命名规范
  3 
  4 字节大小与数据范围
  5 溢出现象
  6 
  7 
  8 
  9 
  10 打印格式
*/
#include<stdio.h>
int main03 ()
{
	//1 字符型的原理 :影像与编码的关系
	//char a = 'A';
	//char b = 97;
	//printf("影像方式：%c 编码方式%hhd\n",a,a);
	//printf("影像方式：%c 编码方式%hhd\n", b, b);
	//2 字符型 字面值
	//char zi = 'A';//影像方式
	//zi = '\101'; //八进制方式
	//zi = '\x41'; //十六进制方式
	////用单引号 表达的 可以在双引号内 连续设置
	//printf("ABCD \101\102\103 \x41\x42\x43 \n");
	////转义字符——
	////1 ：需要显示 但无法输入
	//'\n';//换行
	//printf("ABCD%c \101\102\103\12 \x41\x42\x43\xa",10);
	//'\t';//缩格——制表符
	//printf("math\ten\tcn\n");
	//printf("90\t88\t68\n");
	//printf("100\t100\t100\n");
	//'\b';//退格键 backspace
	//printf("ab\bde\n");
	//'\r';//回车——让光标回到本行开头
	//printf("ab\rde\n");
	////2 被代码占用的
	//printf(" \" \' \\ ");
	//printf("%%d");//%%是printf自己的转义符号
	//3. 字符的常用算法
	//1：字符种类判断
	/*char zi = 'X';
	printf("数字字符：%d\n",zi>='0' && zi<='9');
	printf("小写字母字符：%d\n", zi >= 'a' && zi <= 'z');
	printf("大写字母字符：%d\n", zi >= 'A' && zi <= 'Z');
	printf("字母字符：%d\n", zi >= 'a' && zi <= 'z'
							|| zi >= 'A' && zi <= 'Z');*/
	////2 转换：
	////大小写字母 +- 32
	//char letter = 'W';
	//printf("%c %c\n", letter, letter+32);
	//数字与数字字符 +-  '0'
	//int n = '9';
	//n -= '0';
	//printf("%d\n",n);
	//3 不用数组 输入多个字符
	char ch;
	do
	{
	//	scanf("%c",&ch);
		scanf_s("%c", &ch,1);
		printf("%c",ch);
	} while (ch!='\n');

	char x, y;
	//_s对于字符输入 必须指明 可用内存的字节数
	scanf_s("%c%c",&x,1,&y,1);
	return 0;
}