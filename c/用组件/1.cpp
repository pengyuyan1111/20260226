#include <stdio.h>
#include<string_pro.h>
#include<collections.h>
int main()
{
	char str[] = "hello world";
	toUpperCase(str);
	puts(str);
	PLinkedList list = createLinkedList();
	add(list, (void*)"one");
	add(list, (void*)"two");
	add(list, (void*)"three");
	iterator(list);
	while ( hasNext(list))
	{
		const char* str=(const char*)next(list);
		puts(str);
	}
	//标准链表释放
	clear(list);
	free(list);
	list = NULL;
	return 0;
}