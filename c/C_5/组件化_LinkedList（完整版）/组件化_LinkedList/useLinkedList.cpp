#include "linkedlist.h"
#include "string.h"


int main1()
{
	//创建多条链表
	PLinkedList list= createLinkedList();
	PLinkedList list2 = createLinkedList();
	 //向链表中 加入数据
	add(list, "banana");//0
	add(list, "apple");//1			
	add(list, "peach");//2
	add(list, "grape");
	//插入
	//insert(list, 2, "book");
	//insert(list, 0, "one");
	//insert(list, 10, "c++");
	//删除
	/*const char * str=(const char*)removeIndex(list, 2);
	puts(str);
	str = (const char*)removeIndex(list, 0);
	puts(str);
	str = (const char*)removeIndex(list, 3);
	puts(str);
	str = (const char*)removeIndex(list, 1);
	puts(str);*/

	//遍历链表
	//1 下标方式
	/*for ( int i=0; i<size(list) ; i++)
	{
		const char*str=(const char*)get(list, i);
		puts(str);
	}*/
	//比对一下遍历效率
	/*PNode p = list->header;
	while (p!=NULL)
	{
		const char* str = (const char*)p->data;
		puts(str);
		p = p->next;
	}*/

	set(list, 1, "APPLE");

	//迭代器的遍历
	iterator(list);
	while (  hasNext(list)  )
	{
		const char* str = (const char*)next(list);
		puts(str);
	}


	//彻底释放链表空间
	//清空链表——释放所有堆内存的节点空间
	clear(list);
	free(list);//释放 链表管理的 堆内存空间
	list = NULL;
	return 0;
}
 
