#include<stdio.h>
struct aa
{
	int bb;
	char cc[10];
};
struct Phone
{
	char Make[50];
	char Model[50];
	float Price;
	int TTM;
};
int main()
{
	//int a = 0;
	//int b = 1;
	//int c=2;
	//char s1[5] = {5};
	//char s2[9] = {9};
	char s3[]="ab\0AB";
	char s6[6]="100000";
	printf("%d\n",strlen(s6));
	
	struct aa a = {.bb=5,.cc="hello"};
	struct Phone i = {
		.Make = "Apple",
		.Model = "i 13",
		.Price = 4223,
		.TTM = 2021
	};
	return 0;
}