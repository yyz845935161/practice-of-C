#define MaxSize1 10
#define MaxSize2 7
typedef struct { //���Ա�1
	int data[MaxSize1];
	int length;
}Seqlist;

void InitList(Seqlist L) {  //��ʼ˳���
	for (int i = 0; i < MaxSize1; i++)
	{
		L.data[i] = 0;
		L.length = 0;
	}
}