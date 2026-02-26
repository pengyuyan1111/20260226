#include "collections.h"
#include "string.h"
/*比较规则*/
int wordCmp(void* v1, void* v2);
int wordLen(void* v1, void* v2);
int main()
{
	PLinkedList list1 = createLinkedList();
	PLinkedList list2 = createLinkedList();
	add(list1, "one");
	add(list1, "two");
	add(list1, "three");
	add(list1, "four");
	add(list1, "two");
	add(list2, "java");
	add(list2, "two");
	add(list2, "python");
	add(list2, "c/c++");

	addAll__(list1, list2);
	/*swap__(list1, 1, 2);
	shuffle__(list1);*/
	//reverse__(list1);
	//sort__(list1, wordCmp);
	/*replaceAll__(list1, "two", "TWO-2", wordCmp);*/
	removeData(list1, "java", wordCmp);

	iterator(list1);
	while (  hasNext(list1))
	{
		const char* str = (const char*)next(list1);
		puts(str);
	}
	//printf("下标：%d\n",binarySearch__(list1,"ARE", wordCmp));
	//谁是最大的 单词 strcmp
	//const char * mstr=(const char*)min__(list1, wordLen);
	//printf("最小单词：%s\n",mstr);
	//找下标：
	/*printf("下标：%d\n",indexOf(list1,"Java",wordCmp));*/
	return 0;
}

int wordCmp(void* v1, void* v2)
{
	const char* s1 = (const char*)v1;
	const char* s2 = (const char*)v2;
	return strcmp(s1,s2);
}

int wordLen(void* v1, void* v2)
{
	//拆快递：强转真正的数据类型
	const char* s1 = (const char*)v1;
	const char* s2 = (const char*)v2;
	//return strlen(s1) - strlen(s2);
	if (strlen(s1) - strlen(s2) ==0)//长度相同
	{
		return strcmp(s1, s2);//再按ASCII大小比较
	}
	return strlen(s1) - strlen(s2);
}
