#include "collections.h"
#include "string.h"
#include"linkedlist.h"
//单词比较规则
int wordcmp(void* v1, void* v2);
int main(){
	PLinkedList list1 = createLinkedList();
	PLinkedList list2 = createLinkedList();

	add(list1, "one");
	add(list1, "one1"); 
	add(list1, "one2");
	add(list1, "pne3");
	add(list1, "one1");
	add(list1, "one4");
	add(list1, "one5");
	add(list1, "one1");
	add(list1, "one6");
	add(list1, "one3");
	addAll__(list1, list2);
	//replaceAll__(list1, "one1", "pee1" ,wordcmp);

	int xb=indexOf(list1, "one5", wordcmp);
	printf("%d\n", xb);
	removeData(list1, "one5", wordcmp);
	/*swap__(list1, 1, 2);*/
	/*shuffle__(list1);*/
	//reverse__(list1);

	//sort__(list1, wordcmp);

	iterator(list1);
	const char* str;
	while (hasNext(list1)) {
		str =(const char *) next(list1);
		puts(str);
	}
	/*const char* v;
	v=(const char*)max__(list1,wordcmp);
	printf("da,%s\n", v);
	v = (const char*)min__(list1, wordcmp);
	printf("da,%s\n", v);*/
	//printf("在%d\n",binarySearch__(list1,"one4",wordcmp));
	return 0;
}

int wordcmp(void* v1, void* v2)
{
	const char* s1 = (const char*)v1;
	const char* s2 = (const char*)v2;
	return strcmp(s1,s2);
}
