#include"stdio.h"


int  A[] = { 1,2,3,4,11,12,13,14,15,16,991,992,993 }; //13个元素

int zhong1[] = { 1,2,3,15,16 };
int zhong2[] = { 7,8,9,10,19 };
int zhuyuansu[] = { 5,5,3,3,3,6,5,1,5,0,5 }; //11个元素，统计元素出现的个数

//将元素倒置
 int Reserver(int A[], int left, int right) {
	if (left > right)return -1;

	int tempor;
	for(int i = 0 ;i<(right -left)/2+1;i++)
	{
		tempor = A[left+i];
		A[left+i] = A[right-i];
		A[right-i] = tempor;
	}
	return 1;
}//将元素倒置

 //输出
void Port(int A[],int x) {
	for (int i = 0; i < x; i++)
	{
		printf("%d    ", A[i]);
	}
	printf("\n\n");

}

void reverser_printf() {
	Port(A,13);
	Reserver(A, 0, 3);
	Reserver(A, 4,9);
	Reserver(A, 10, 12);
	Port(A,13);
}

void Converse(int A[],int p ){
	Port(A,13);
	Reserver(A, 0, 12);
	Reserver(A, 0,p-1 );
	Reserver(A, p, 12);
	Port(A,13);
}

//找两个数组的中位数
void find_tow_mid(int A[],int B[]) {
	int z1=0, z2=0;
	int final;
	for (int i = 0; i < 5; i++)
	{
		if (A[z1] >= B[z2]) {
			z2++;
			if (i == 4) printf("%d",B[z2]);
		}
		else {
			z1++;
			if (i == 4) printf("%d",A[z1]);
		}

	}
}


//统计元素出现的次数
void countnumber(int A[]) {
	int geshu[11] = {0}; //保存元素出现的次数
	for (int i = 0; i < 11; i++)
	{
		geshu[A[i]]++;
	}
	Port(geshu,11);
}

void main()
{
	//find_tow_mid(zhong1, zhong2);
	countnumber(zhuyuansu);

	
}