#include<stdio.h>
#include"linkedlist.h"
int mainssss() {

	/*PLinkedList stack = createLinkedList();

	push(stack, "che");
	push(stack, "ma");
	push(stack, "pao");
	push(stack, "jiang");

	const char* str6;

	str6 =(const char*) pop(stack);
	puts(str6);
	str6 = (const char*)pop(stack);
	puts(str6);
	str6 = (const char*)pop(stack);
	puts(str6);
	str6 = (const char*)pop(stack);
	puts(str6);*/

	PLinkedList queue = createLinkedList();
	addFirst(queue, "aa");
	addFirst(queue, "bb");
	addFirst(queue, "vv");
	addFirst(queue, "uu");
	addFirst(queue, "tt");
	
	const char* str;
	str=(const char*) removeLast(queue);
	puts(str);
	str = (const char*)removeLast(queue);
	puts(str);
	str = (const char*)removeLast(queue);
	puts(str);
	str = (const char*)removeLast(queue);
	puts(str);
	str = (const char*)removeLast(queue);
	puts(str);
	return 0;
}