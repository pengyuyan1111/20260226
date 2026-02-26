#include<stdio.h>
#include"linkedlist.h"
int main3()
{
	//测试栈LIFO：last in first out 后进先出 */
	/*PLinkedList stack = createLinkedList();
	push(stack, "车");
	push(stack, "马");
	push(stack, "炮");
	const char* str;
	str=(const char*)pop(stack);
	printf("%s\n",str);
	str = (const char*)pop(stack);
	printf("%s\n", str);
	str = (const char*)pop(stack);
	printf("%s\n", str);
	str = (const char*)pop(stack);
	printf("%s\n", str);*/
	/*实现队列queue的功能：FIFO：first in first out 先进先出 */
	PLinkedList queue = createLinkedList();
	addFirst(queue, "aa");
	addFirst(queue, "bb");
	addFirst(queue, "cc");
	addFirst(queue, "dd");
	const char* str;
	str =(const char*) removeLast(queue);
	printf("%s\n", str);
	str = (const char*)removeLast(queue);
	printf("%s\n", str);
	str = (const char*)removeLast(queue);
	printf("%s\n", str);
	str = (const char*)removeLast(queue);
	printf("%s\n", str);
	str = (const char*)removeLast(queue);
	printf("%s\n", str);
	return 0;
}