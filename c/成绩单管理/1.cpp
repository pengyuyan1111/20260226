#include<stdio.h>
#include<string_pro.h>
#include<collections.h>

//数据类型·数据结构
//姓名  数学 语文 英文
typedef struct score
{
	char name[30];
	int math;//数学
	int cn;//语文 
	int en;//英文
} Score;
//链表管理成绩 
PLinkedList listScore;
/*新成绩： 把数据放到 堆区*/
Score* newScore(Score s);
 
//排序比较的规则
int mathCmp(void * v1,void* v2);
int sumCmp(void* v1,void* v2);
void printScore();
int main()
{
	listScore = createLinkedList();
	//临时用数组表达既有成绩
	Score cj[4] = { {"zhangsan",89,66,87},{"lisi",100,89,71},
					{"wangwu",87,98,100},{"zhuliu",59,51,32}};
	//把既有数据 加入到链表。 
	for (int i=0 ;i<4 ;i++ )
	{
		Score* p = newScore(cj[i]);
		add(listScore, p);
	}

	//输入 若干成绩
	for (int i=0 ;i<3 ;i++ )
	{
		Score tmp;
		printf("姓名：");
		gets_s(tmp.name,30);
		printf("数学：");
		scanf_s("%d",&tmp.math);
		printf("语文：");
		scanf_s("%d", &tmp.cn);
		printf("英语：");
		scanf_s("%d", &tmp.en);
		add(listScore, newScore(tmp));
		setvbuf(stdin,NULL,_IOFBF,100);//清空键盘缓冲区
	}

	//遍历链表
	printScore();
	//按规则排序
	sort__(listScore, mathCmp);
	puts("===数学成绩排名====");
	printScore();
	puts("===总成绩排名====");
	sort__(listScore, sumCmp);
	printScore();
	//释放链表
	
	//1 迭代释放所有成绩数据
	iterator(listScore);
	while (hasNext(listScore))
	{
		free(next(listScore));
	}
	//2清空节点
	clear(listScore);
	//3释放链表管理
	free(listScore);
	listScore = NULL;
	return 0;
}

void printScore()
{
	iterator(listScore);
	while (hasNext(listScore))
	{
		Score* p = (Score*)next(listScore);
		printf("%-20s%6d%6d%6d\n", p->name, p->math, p->cn, p->en);
	}
}
 
int mathCmp(void* v1, void* v2)
{
	Score* c1 = (Score*)v1;
	Score* c2 = (Score*)v2;
	return c2->math-c1->math;
}
int sumCmp(void* v1, void* v2)
{
	Score* c1 = (Score*)v1;
	Score* c2 = (Score*)v2;
	int s1 = c1->math + c1->en + c1->cn;
	int s2 = c2->math + c2->en + c2->cn;
	return s2-s1;
}
Score* newScore(Score s)
{
	Score * p=(Score*)malloc(sizeof(Score));
	memcpy(p, &s, sizeof(Score));
	return p;
}
