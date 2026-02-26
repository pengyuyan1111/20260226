#pragma once
//自定义类型
typedef struct node
{
	int data;
	struct node*next;
} Node,* PNode;
//全局变量声明
extern PNode header;
extern PNode ender;

//函数声明
/*创建节点：把用户的整数 封装成一个堆区的节点 
* 返回：堆区的节点指针
*/
PNode create(int data);
/*向链表尾部 增加 节点*/
void add(PNode node);

/*在某节点后面 插入 新的 节点*/
void insert_behind(int index, PNode node);

/*按 下标 删除 指定节点*/
void remove_index(int index);
/*按 数据 删除 节点*/
void remove_data(int data);

/*某下标的数据节点*/
PNode get(int index);
/*某数据的下标*/
int indexOf(int data);
/*统计：链表中节点数量*/
int size();
