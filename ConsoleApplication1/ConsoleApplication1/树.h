//˳��洢
#define maxsize 100
struct TreeNode {
	ElemType value; //�ڵ�����Ԫ��
	bool isEmpty; //�ڵ��Ƿ�Ϊ��
};

TreeNode t[maxsize];
void initTree(){
for (int i = 0; i < maxsize; i++) //��ʼ��
{
	t[i].isEmpty = true; // ȫ��Ϊ��
}
}

//��ʽ�洢
	typedef struct BiTNode {
		ElemType data;                  //������
		struct BiTnode* lchild, * rchild; //���Һ���ָ��
	}BitNode, * BiTree;

	struct ElemType {
		int value;
	};

//�������ı���
//����PreOrder ����InOrder ����PostOrder
	void PreOrder(BiTree T) {
		if (T != NULL) {
			PreOrder(T->lchild);
			visit(T);
			PreOrder(T->rchild);
		}

	}
//������� ������07
	void LecelOrder(BiTree T) {
		LinkQuene Q;//��������
		InitQueue(Q);//��ʼ������
		BiTree P;
		EnQueue(Q, T);//�����ڵ����
		while (!IsEmpty(Q)) //�ж϶��в�Ϊ��
		{
			DeQueue(Q, p);    //��ͷԪ�س��ӣ���pָ�����Ԫ��
			visit(p);           //���ʳ��ӽ�㣬�Լ��������ʺ�Ҫ����
			if (p->lchild != NULL)
				EnQueue(Q, P->lchild);  //�������
			if (p->rchild != NULL)
				EnQueue(Q, P->rchild);  //�������

		}
	}
	 

//��������� ������06
	int treeDepth(BiTree T){
		if (T == NULL)
		{
			return 0;
		}
		else {
			int l = treeDepth(T->lchild);
		    int r = treeDepth(T->rchild);;
			return l > r ? l + 1 : r + 1;
		}
	}



