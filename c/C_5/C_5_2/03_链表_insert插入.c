#include<stdio.h>
#include <stdlib.h>
#include"link.h"

 
int main03()
{
	//测试用例
   // 1 2 3 4
	PNode p1 = create(1);
	add(p1);
	add(create(2));
	add(create(3));
	add(create(4));

	insert_behind(2, create(666));

	return 0;
} 
/*后插入*/
void insert_behind(int index, PNode node)
{ 
	//1 找到插入点
	PNode p = header;
	for ( int i=0; i<index;i++ )
	{
		p = p->next;
	}
	//2 新节点 加入链表
	PNode q = p->next;
	node->next = q;
	p->next = node;
}


 
