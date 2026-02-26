#include"linkedlist.h"
PLinkedList createLinkedList() {
	PLinkedList newList = (PLinkedList)malloc(sizeof(LinkedList));
	newList->header = NULL;
	newList->ender = NULL;
	newList->size = 0;
	return newList;
}
PNode createNode(void* data) {
	PNode newNode = (PNode)malloc(sizeof(Node));
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->data = data;
	return newNode;
}
void add(PLinkedList  list, void* data) {
	PNode p = createNode(data);
	if (list->size==0) {
		list->header = p;
		list->ender = p;
		list->size++;
	}
	else {
		list->ender->next = p;
		p->prev = list->ender;
		list->ender = p;
		list->size++;
	}
}
void insert(PLinkedList  list, int index, void* data) {
	if (index>list->size-1||list->size==0) {
		add(list, data);
		return;
	}
	PNode newNode = createNode(data);
	if (index<=0) {
		PNode p = list->header;
		newNode->next = p;
		p->prev = newNode;
		list->header = newNode;
	}
	else {
		PNode p = findNode(list, index);
		p->prev->next = newNode;
		newNode->next = p;
		newNode->prev = p->prev;
		p->prev = newNode;
	}
	
	list->size++;

}
PNode findNode(PLinkedList  list, int index) {
	PNode p = list->header;
	for (int i = 0; i < index&&i< list->size; i++) {
		p = p->next;
	}
	return p;
}
void* removeIndex(PLinkedList  list, int index) {
	if (list->size==0) {
		return 0;
	}
	PNode p ;
	if (list->size == 1) {
		 p = list->header;
		list->header == NULL;
		list->ender == NULL;
	}
	else if (index <= 0) {
		 p = list->header;
		/*p->next->prev = NULL;
		list->header = p->next;*/
		 list->header = p->next;
		 list->header->prev = NULL;

	}
	else if (index>=list->size-1) {
		p = list->ender;
	/*	p->prev->next = NULL;
		list->ender = p;*/
		list->ender = p->prev;
		list->ender->next = NULL;
	}
	else {
		p = findNode(list, index);
		PNode q = p->next;
		PNode n = p->prev;
		n->next = q;
		q->prev = n;
	}
	void* t  = p->data;
	free(p);
	list->size--;

	return t;
}
//void* removeIndex(PLinkedList list, int index)
//{
//	//1空链表
//	if (list->size == 0) {
//		return NULL;
//	}
//	PNode p;//指向 被删除的节点
//	//2 唯一的节点被删除
//	if (list->size == 1)
//	{
//		p = list->header;
//		list->header = NULL;
//		list->ender = NULL;
//	}
//	//3删除头
//	else if (index <= 0)
//	{
//		p = list->header;
//		list->header = p->next;
//		list->header->prev = NULL;
//	}
//	//4删除尾部
//	else if (index >= list->size - 1)
//	{
//		p = list->ender;
//		list->ender = p->prev;
//		list->ender->next = NULL;
//	}
//	//5中间删除
//	else
//	{
//		p = findNode(list, index);
//		PNode q = p->prev;
//		PNode n = p->next;
//		q->next = n;
//		n->prev = q;
//	}
//	//被删4件套
//	void* temp = p->data;
//	free(p);
//	list->size--;
//	return temp;
//}
void clear(PLinkedList  list) {
	PNode p = list->header;
	PNode q;
	while (p != NULL) {
		q = p;
		p = p->next;
		free(q);
		list->size--;
	}
	list->ender = NULL;
	list->header = NULL;
}
int size(PLinkedList  list) {
	return list->size;
}
void* get(PLinkedList  list, int index) {
	PNode p = findNode(list, index);
	return p != NULL ? p->data: NULL;
}
void iterator(PLinkedList list)
{
	list->nextNode = list->header;
}

int hasNext(PLinkedList list)
{

	return list->nextNode!=NULL;
}
void* next(PLinkedList list)
{
	void *t =list->nextNode->data;
	list->nextNode = list->nextNode->next;
	return t;
}
void set(PLinkedList list, int index, void* newdata)
{
	PNode p = findNode(list, index);
	if (p != NULL) {
		p->data = newdata;
	}
}

void push(PLinkedList list, void* data)
{
	add(list, data);
}
void* pop(PLinkedList list)
{

	return removeIndex(list,list->size-1);
}
void addFirst(PLinkedList  list, void* data){
	insert(list, 0, data);

}
void addLast(PLinkedList  list, void* data){
	add(list, data);
}
void* removeFirst(PLinkedList  list) {
	return removeIndex(list,0);
}
void* removeLast(PLinkedList  list) {
	return removeIndex(list,list->size-1);
}
void removeData(PLinkedList list, void* data, Compare fun)
{
	PNode p = list->header;
	int count = 0;
	while (p != NULL) {
		if (fun(p->data, data) == 0) {
			removeIndex(list, count);
			return;
		}
		count++;
		p = p->next;
	}
}
int indexOf(PLinkedList  list, void* data, Compare fun) {
	PNode p = list->header;
	 int count = 0;
	while (p != NULL) {
		if (fun(p->data, data)==0) {
			return count;
		}
		count++;
		p = p->next;
	}
	return -1;
}
