#include<stdio.h>
#include <stdlib.h>
#include"link.h"
int main()
{
	//测试用例
 // 1 2 3 4
	PNode p1 = create(1);
	add(p1);
	add(create(66));
	add(create(88));
	add(create(4));
	//remove_data(88);
	
	//按下标遍历链表
	for (int i=0 ,len = size();i<len ;i++)
	{
		PNode p = get(i);
		printf("%d\n",p->data);
	}
	printf("88的下标%d\n", indexOf(88));
	//printf("下标：%d\n",indexOf(666));

	return 0;
}
int size()
{
	PNode p = header;
	int count = 0;
	while ( p!=NULL)
	{
		count++;
		p = p->next;
	}
	return count;
}
PNode get(int index)
{
	PNode p = header;
	for (int i = 0; i < index;i++)
	{
		p = p->next;
	}
	return p;
}

int indexOf(int data)
{
	PNode p = header;
	for ( int i=0;p!=NULL ; i++)
	{
		if (p->data == data)
		{
			return i;
		}
		p = p->next;
	}
	return -1;
}
