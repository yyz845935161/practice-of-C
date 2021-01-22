//c语言中，定义数组后可以用sizeof命令获得数组的长度（可容纳元素个数）
//
//如：

{
int data[4];
int length;
length = sizeof(data) / sizeof(data[0]);  //数组占内存总空间，除以单个元素占内存空间大小
printf("length of data[4]=%d", length); //输出length of data[4]=4
}

//但，通过传递数组名参数到子函数中，以获得数组长度是不可行的。如：

int getLength(int[] a) {
	int length;
	length = sizeof(a) / sizeof(a[0]); //这样是错误的，得到的结果永远是1
	return length;
}
//因为，a是函数参数，到了本函数中，a只是一个指针（地址，系统在本函数运行时，是不知道a所表示的地址有多大的数据存储空间，这里只是告诉函数：一个数据存储空间首地址），所以，sizoef(a)的结果是指针变量a占内存的大小，一般在32位机上是4个字节。a[0]是int类型，sizeof(a[0])也是4个字节，所以，结果永远是1。#pragma once
