//�ʼ� typedef int zhengs 
//	typedef   int *zhizheng
//int x = 1��   zhengshu x
//int *p��      zhengshu P

typedef struct LNode
{
	int data; //������
	struct LNode* next; //�ṹ��ָ�룬ָ����һ���ṹ��
}LNode,*LinkList;   //������
//����ռ�
//struct LNode* p = (struct LNode *)malloc(sizeof(struct LNode));
//�������� LNode *P = (LNode *)malloc(sizeof(LNode));

LNode* L; //����ָ������ĵ�һ���ڵ�ָ��   ǿ��ָ��
LinkList L;//����ָ������ĵ�һ���ڵ�ָ��   ǿ��������

//˫����
typedef struct DNode {
	ElemType data;
	struct DNode* prior, * next;
}DNode,*DLinklist;