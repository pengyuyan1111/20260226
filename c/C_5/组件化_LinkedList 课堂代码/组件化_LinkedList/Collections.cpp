#include"collections.h"
#include<time.h>
void  addAll__(PLinkedList list1, PLinkedList list2) {
	iterator(list2);
	while (hasNext(list2)) {
		add(list1,next(list2));
	}
}
void swap__(PLinkedList list, int i, int j) {
	PNode pi= findNode(list, i);
	PNode pj = findNode(list, j);
	if (pi!=NULL&&pj!=NULL) {
		void* t;
		t = pi->data;
		pi->data = pj->data;
		pj->data = t;
	}
}
void shuffle__(PLinkedList list) {
	srand(time(NULL));
	for (int i= 0;i<list->size;i++) {
		int a = rand() % list->size;
		int b = rand() % list->size;
		if (a != b) {
			swap__(list, a, b);
		}
	}
}
void reverse__(PLinkedList list)
{
	/*for (int i = 0,j = list->size - 1;i<j; i++,j--) {
		swap__(list, i, j);
	}*/
	PNode p = list->header;
	PNode q = list->ender;
	for (int i = 0, j = list->size - 1; i < j; i++, j--) {
		void* t;
		t = p->data;
		p->data = q->data;
		q->data = t;
		p = p->next;
		q = q->prev;
	}
}
void* max__(PLinkedList list, Compare fun) {
	void* maxValue = list->header->data;
	if (list->size == 0) {
		return NULL;
	}
	for (PNode p =list->header;p!=NULL;p=p->next) {
		if (fun(maxValue,p->data)<0) {
			maxValue = p->data;
		}
	}
	return maxValue;
}
void* min__(PLinkedList list, Compare fun)
{
	void* minValue = list->header->data;
	if (list->size == 0) {
		return NULL;
	}
	for (PNode p = list->header; p != NULL; p = p->next) {
		if (fun(minValue, p->data) > 0) {
			minValue = p->data;
		}
	}
	return minValue;
}
void sort__(PLinkedList list, Compare fun)
{
	PNode p = list->header;
	for (int suo =0;suo<list->size-1;suo++) {
		PNode q = p->next;
		for (int bi=suo+1;bi<list->size;bi++) {
			if (fun(p->data, q->data) > 0) {
				void* t;
				t = p->data;
				p->data = q->data;
				q->data = t;
			}
			q = q->next;
		}
		p = p->next;
	}
}
int binarySearch__(PLinkedList list, void* key, Compare fun)
{
	int left = 0;
	int right = list->size - 1;
	int mid;
	do {
		mid = (left + right) / 2;
		void * midValue =get(list, mid);
		int r = fun(midValue, key);
		if (r == 0) {
			return mid;
		}
		else if (r>0) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	} while (left<=right);
	return -1;
}
void replaceAll__(PLinkedList list, void* oldVal, void* newVal, Compare fun) {
	PNode p = list->header;
	while (p != NULL) {
		if (fun(p->data, oldVal) == 0) {
			p->data = newVal;
		}
		p = p->next;
	}
}