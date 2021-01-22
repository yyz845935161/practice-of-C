//笔记 typedef int zhengs 
//	typedef   int *zhizheng
//int x = 1；   zhengshu x
//int *p；      zhengshu P

typedef struct LNode
{
	int data; //数据域
	struct LNode* next; //结构体指针，指向整一个结构体
}LNode,*LinkList;   //重命名
//申请空间
//struct LNode* p = (struct LNode *)malloc(sizeof(struct LNode));
//重命名后 LNode *P = (LNode *)malloc(sizeof(LNode));

LNode* L; //申明指向单链表的第一个节点指针   强调指针
LinkList L;//申明指向单链表的第一个节点指针   强调单链表

//双链表
typedef struct DNode {
	ElemType data;
	struct DNode* prior, * next;
}DNode,*DLinklist;