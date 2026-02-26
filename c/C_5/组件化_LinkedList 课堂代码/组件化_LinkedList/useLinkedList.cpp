#include "linkedlist.h"
#include "string.h"
int main02()
{
	//创建列表
	PLinkedList list=createLinkedList();

	add(list, "apple");
	add(list, "banana");
	add(list, "orange");
	add(list, "peach");
	/*insert(list, 2, "grape");
	insert(list, 100, "c++");
	insert(list, 0, "python");*/


	//const char * str1=(const char*)removeIndex(list, 2);
	//puts(str1);
	//const char* str2= (const char*)removeIndex(list, 0);
	//puts(str2);
	//const char* str3 = (const char*)removeIndex(list, 5);
	//puts(str3);
	//const char* str4 = (const char*)removeIndex(list, 5);
	//puts(str4);

	/*int len = size(list);
	for (int i=0;i<len;i++) {
		const char* str=(const char*)get(list, i);
		puts(str);
	}*/

	set(list, 0, "APPLE");

	iterator(list);
	while (hasNext(list)) {
	const char* str= (const char*) next(list);
	puts(str);
	}

	

	/*clear(list);
	free(list);*/
	return 0;
}
 
