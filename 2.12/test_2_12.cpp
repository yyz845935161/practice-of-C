#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Student
{
	char name[20];
	char sex[5];
	int age;

};

struct Student A = { "Ԫ��", "��", 22 };
struct Student B = { '����','Ů',16 };
struct Student C = { '����','Ů',16 };
struct Student D = {'����','��',46};
//
//My_Bob( )

void My_printf() 
{
	printf("����\t�Ա�\t����\n");
	printf("%s\t%s\t%d", A.name, A.sex,A.age);
}

int main()
{
	
	My_printf();

}