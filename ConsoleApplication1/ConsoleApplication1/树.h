//顺序存储
#define maxsize 100
struct TreeNode {
	ElemType value; //节点数据元素
	bool isEmpty; //节点是非为空
};

TreeNode t[maxsize];
void initTree(){
for (int i = 0; i < maxsize; i++) //初始化
{
	t[i].isEmpty = true; // 全部为空
}
}

//链式存储
	typedef struct BiTNode {
		ElemType data;                  //数据域
		struct BiTnode* lchild, * rchild; //左右孩子指针
	}BitNode, * BiTree;

	struct ElemType {
		int value;
	};

//二叉树的遍历
//先序PreOrder 中序InOrder 后序PostOrder
	void PreOrder(BiTree T) {
		if (T != NULL) {
			PreOrder(T->lchild);
			visit(T);
			PreOrder(T->rchild);
		}

	}
//层序遍历 第五章07
	void LecelOrder(BiTree T) {
		LinkQuene Q;//创建队列
		InitQueue(Q);//初始化队列
		BiTree P;
		EnQueue(Q, T);//将根节点入队
		while (!IsEmpty(Q)) //判断队列不为空
		{
			DeQueue(Q, p);    //对头元素出队，让p指向出队元素
			visit(p);           //访问出队结点，自己决定访问后要干嘛
			if (p->lchild != NULL)
				EnQueue(Q, P->lchild);  //左孩子入队
			if (p->rchild != NULL)
				EnQueue(Q, P->rchild);  //左孩子入队

		}
	}
	 

//求树的深度 第五章06
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



