#define SUM 5
int Tdata []= {1, 2, 4, 5, 6, 9,18};
int Cdata[];
int Tdatalenth = sizeof(Tdata) / sizeof(Tdata[0]);

void pshuzu(int x,int A[]) { //输出一个数组的前n的数据
	//int x = sizeof(B) / sizeof(B[0]);
	for (int i = 0; i < x; i++)
	{
		printf("%d\n", A[i]);
	}
}
void _19_5(float a ,float b) {
	int left=0,right=0;
	for (int i = 0; i < Tdatalenth; i++) 
	{
		if (a < Tdata[i]) {
			left = i;
			break;
		}
	}
	for (int i = Tdatalenth; i > 0 ; i--)
	{
		if (b < Tdata[i]) {
			right = i;
			break;
		}
	}
	for (int i = Tdatalenth - right; i < Tdatalenth ; i++)
	{
		Tdata[left] = Tdata[right+1];
		left++;
		right++;
	}
	pshuzu(Tdatalenth-(right-left),Tdata);
}


void Hang(){
printf("\n\n");
}
