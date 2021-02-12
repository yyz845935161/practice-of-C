#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Student
{
	char name[20];
	char sex[5];
	int age;

};

struct Student A = { "元樟", "男", 22 };
struct Student B = { '凉凉','女',16 };
struct Student C = { '粉人','女',16 };
struct Student D = {'张三','男',46};
//
//My_Bob( )

void My_printf() 
{
	printf("姓名\t性别\t年龄\n");
	printf("%s\t%s\t%d", A.name, A.sex,A.age);
}

int main()
{
	
	My_printf();

}