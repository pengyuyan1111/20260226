#include <stdio.h>
#include <string.h>
#include<stdlib.h>
 int main08    ()
{
	/*字符串与数字类型互相转换*/
	
	/*itoa    int  to转换  ascii*/
	/* char str[20];
	 _itoa(1234, str, 10);
	 int n = 1234;
	 printf("%d %o %x %s\n",n,n,n,itoa(n,str,2));*/
	  
	/*atoi,atof atol*/
	 int b = atoi("1234");
	double pi= atof("3.1415926");
	long long ds=atoll("454545888974879");
	// 通用的 数据转 字符串
	char ss[30];
	//printf("%.3f",3.1415926);//向屏幕输出
	sprintf(ss, "%.3f", 3.1415926);  //s-string  把转换结果 向字符数组输出
	sprintf(ss,"%lld", 454545888974879LL);
	return 0;
}

 