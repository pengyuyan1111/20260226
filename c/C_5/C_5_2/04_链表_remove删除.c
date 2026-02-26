#include<stdio.h>
 #include <stdlib.h>
#include"link.h"
 
int main04()
{
	//测试用例
  // 1 2 3 4
	PNode p1 = create(1);
	add(p1);
	add(create(2));
	add(create(3));//被删
	add(create(4));
	remove_index(2);
	return 0;
}
void remove_index(int index)
{
	//理想的中间删除
	PNode p = header;
	PNode m = NULL;
	for ( int i=0;i<index ;i++ )
	{
		m = p;
		p = p->next;
	}
	PNode q = p->next;
	//删除节点
	m->next = q;
	free(p);
	p = NULL;
}

void remove_data(int data) 
{
	int i = indexOf(data);
	if (i>=0)//找到了。
	{
		remove_index(i);
	}
}