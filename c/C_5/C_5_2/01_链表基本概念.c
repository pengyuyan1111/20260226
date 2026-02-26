#include <stdio.h>
#include <malloc.h>
//声明节点结构
typedef struct node
{
	int data;//数据域
	struct node * next;//下一个节点
} Node, *P_NODE;

int main01 ()
{//对比数组
	int arr[5] = {3,9,8,5,2};
	/*链表基本概念*/
	//1 .声明一个头节点，一般头节点不存贮数据

	//2.创建几个节点变量： 栈区   
	/*Node n1 = { 3,NULL };
	Node n2 = { 9,NULL };
	Node n3 = { 8,NULL };
	Node n4 = { 5,NULL };
	Node n5 = { 2,NULL };*/
	//堆区
	P_NODE p1 = malloc(sizeof(Node));
	p1->data = 3;
	p1->next = NULL;
	P_NODE p2 = malloc(sizeof(Node));
	p2->data = 9;
	p2->next = NULL;
	P_NODE p3 = malloc(sizeof(Node));
	p3->data = 8;
	p3->next = NULL;
	P_NODE p4 = malloc(sizeof(Node));
	p4->data = 5;
	p4->next = NULL;

	//3. 链接所有节点
	/*n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;*/
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	//4. 遍历链表
	Node* p = p1;
	while ( p!=NULL)
	{
		printf("%d\n",p->data);
		p = p->next;
	}
	 
	return 0;
}