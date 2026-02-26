#include"linkedlist.h"

PLinkedList createLinkedList()
{
	PLinkedList	newList=(PLinkedList)malloc(sizeof(LinkedList));
	//初始化
	newList->header = NULL;
	newList->ender = NULL;
	newList->size = 0;
	return newList;
}

PNode createNode(void* data)
{
	PNode newNode=(PNode)malloc(sizeof(Node));
	//新节点初始化
	newNode->prev = NULL;
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void add(PLinkedList list, void* data)
{
	PNode newnode=createNode(data);
	if ( list->size==0)//空链表
	{
		list->header = list->ender = newnode;
		list->size = 1;
	}
	else
	{
		list->ender->next = newnode;
		newnode->prev = list->ender;
		list->ender = newnode;
		list->size++;
	}
}

void insert(PLinkedList list, int index, void* data)
{
	//1 空链表，直接add追加到尾部
	// 	 3 插入点超出最大下标 应该放到后面 执行add
	if ( list->size==0 || index>list->size-1 )
	{
		add(list, data);
		return;
	}
	PNode newnode = createNode(data);
	//2 index是0
	if ( index<=0)//插入到头部
	{
		newnode->next = list->header;
		list->header->prev = newnode;
		list->header = newnode;
	}
	else
	{
		//中间插入
		PNode p = findNode(list, index);
		PNode q = p->prev;
		p->prev = newnode;
		newnode->next = p;
		q->next = newnode;
		newnode->prev = q;
	}
	list->size++;
}

void* removeIndex(PLinkedList list, int index)
{
	//1空链表
	if (list->size==0) {
		return NULL;
	}
	PNode p;//指向 被删除的节点
	//2 唯一的节点被删除
	if (list->size==1)
	{
		p = list->header;
		list->header = NULL;
		list->ender = NULL;
	}
	//3删除头
	else if ( index<=0)
	{
		p = list->header;
		list->header = p->next;
		list->header->prev = NULL;
	}
	//4删除尾部
	else if (index>=list->size-1)
	{
		p = list->ender;
		list->ender = p->prev;
		list->ender->next = NULL;
	}
	//5中间删除
	else
	{
		p = findNode(list, index);
		PNode q = p->prev;
		PNode n = p->next;
		q->next = n;
		n->prev = q;
	}
	//被删4件套
	void* temp = p->data;
	free(p);
	list->size--;
	return temp;
}

void removeData(PLinkedList list, void* data, Compare fun)
{
	int xb = indexOf(list, data, fun);
	if (xb>=0)
	{
		removeIndex(list, xb);
	}
}

void* get(PLinkedList list, int index)
{
	PNode p = findNode(list, index);
	return p!=NULL ? p->data :NULL ;
}

PNode findNode(PLinkedList list, int index)
{
	PNode p = list->header;
	for (int i=0 ;i<index &&index<list->size  ;i++ )
	{
		p = p->next;
	}
	return p;
}

void set(PLinkedList list, int index, void* newdata)
{
	PNode p = findNode(list, index);
	if (p!=NULL)
	{
		p->data = newdata;
	}
}

int indexOf(PLinkedList list, void* data, Compare fun)
{
	PNode p = list->header;
	for ( int i=0 ; p!=NULL ;i++ )
	{
		if (fun(p->data, data)==0)
		{
			return i;
		}
		p = p->next;
	}
	return -1;
}

int size(PLinkedList list)
{
	return list->size;//保护成员变量
}

void clear(PLinkedList list)
{
	PNode p = list->header;
	PNode q = NULL;
	while ( p!=NULL)
	{
		q = p;
		p = p->next;
		free(q);
		list->size--;
	}
	list->header = list->ender = NULL;
}

void iterator(PLinkedList list)
{
	list->nextNode = list->header;
}

int hasNext(PLinkedList list)
{
	return list->nextNode!= NULL;
}

void* next(PLinkedList list)
{
	void* tmp = list->nextNode->data;
	//为下一次取得做好准备
	list->nextNode = list->nextNode->next;
	return tmp;
}

void push(PLinkedList list, void* data)
{
	add(list, data);
}

void* pop(PLinkedList list)
{
	return removeIndex(list,list->size-1);
}
void addFirst(PLinkedList  list, void* data)
{
	insert(list, 0, data);
}
void addLast(PLinkedList  list, void* data)
{
	add(list, data);
}
void* removeFirst(PLinkedList  list)
{
	return removeIndex(list, 0);
}
void* removeLast(PLinkedList  list)
{
	return removeIndex(list,list->size-1);
}