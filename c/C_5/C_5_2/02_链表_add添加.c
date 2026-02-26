#include<stdio.h>
#include <stdlib.h>
#include"link.h"




int main02()
{
	//测试用例
	// 1 2 3 4
	PNode p1 = create(1);
	add(p1);
	add( create(2) );
	add(create(3));
	add(create(4));
	return 0;
}
PNode create(int data)
{
	//创建节点存储空间
	PNode  newNode=malloc(sizeof(Node));
	//初始化节点
	newNode->data = data;
	newNode->next = NULL;
	//返回新节点
	return newNode;
}
PNode header = NULL;
PNode ender = NULL;
void add(PNode node)
{
	if (header == NULL)//空链表的时候
	{
		header = ender = node;
	 }
	else
	{
		ender->next = node;
		ender = node;//成为新的尾部节点
	}
}