#include"pch.h"
#include"collections.h"
#include<time.h>
#include<stdlib.h>
void addAll__(PLinkedList list1, PLinkedList list2)
{
	iterator(list2);
	while ( hasNext(list2) )
	{
		add(list1, next(list2));
	}
}

void* max__(PLinkedList list, Compare fun)
{
	if (list->size==0) {
		return NULL;
	}
	void* maxValue = list->header->data;
	PNode p = list->header->next;
	while (  p!=NULL)
	{
		if (  fun(maxValue,p->data )<0 )
		{
			maxValue = p->data;
		}
		p = p->next;
	}
	return maxValue;
}

void* min__(PLinkedList list, Compare fun)
{
	if (list->size == 0) {
		return NULL;
	}
	void* minValue = list->header->data;
	PNode p = list->header->next;
	while (p != NULL)
	{
		if (fun(minValue, p->data)> 0)
		{
			minValue = p->data;
		}
		p = p->next;
	}
	return minValue;
}

void swap__(PLinkedList list, int i, int j)
{
	PNode pi=findNode(list, i);
	PNode pj = findNode(list, j);
	if (pi&&pj)//找到了对应节点
	{
		void* t;
		t = pi->data;pi->data = pj->data;
		pj->data = t;
	}
}

void sort__(PLinkedList list, Compare fun)
{
	PNode p = list->header;
	for (int suo=0 ;suo<list->size-1 ; suo++,p=p->next)
	{
		PNode q = p->next;
		for (int bi = suo+1;bi < list->size  ; bi++,q=q->next)
		{
			/*if (fun( get(list,suo) ,get(list,bi))>0 )
			{
				swap__(list, suo, bi);
			}*/
			if ( fun(p->data,q->data)>0)
			{
				void* t;
				t = p->data;p->data = q->data;q->data = t;
			}
		}
	}
}

int binarySearch__(PLinkedList list, void* find, Compare fun)
{
	int left = 0;
	int right =list->size - 1;
	int mid = 0;
	do
	{
		mid = (left + right) / 2;
		int r=fun(get(list,mid), find);
		if (r == 0)//找到了
		{
			return mid;
		}
		else if (r > 0)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}

	} while (left <= right);
	return -1;
}

void shuffle__(PLinkedList list)
{
	//随机数
	srand((unsigned)time(NULL));
	for ( int i=0,len = list->size ; i<len; i++)
	{
		int a = rand() % len;
		int b = rand() % len;
		if (a!=b)
		{
			swap__(list, a, b);
		}
	}
}

void reverse__(PLinkedList list)
{
	PNode p = list->header;
	PNode q = list->ender;
	for (int i=0,j=list->size-1 ;i<j ;i++,j-- )
	{
		//swap__(list, i, j);
		void* t;
		t = p->data;p->data = q->data;q->data = t;
		p = p->next;
		q = q->prev;
	}
}

void replaceAll__(PLinkedList list, void* oldVal, void* newVal, Compare fun)
{
	PNode p = list->header;
	while ( p!=NULL)
	{
		if ( fun(p->data, oldVal) ==0 )
		{
			p->data = newVal;
		}

		p = p->next;
	}
}
