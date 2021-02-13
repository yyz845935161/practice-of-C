#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
void My_printf(int* arr, int length);


void My_SOb(int* arr,int length)
{
	assert(arr != NULL);
	int i, j;
	int temp = 0;
	for ( i = 0; i < length-1 ; i++)
	{
		int left = 0, right = 1;
		for ( j = 0; j < length - i-1 ; j++)
		{
			if (arr[left] > arr[right])
			{
				temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;

			}
			left++;
			right++;
		}

	}

}


void My_printf(int arr[], int length)
{
	int i;
	for ( i = 0; i < length; i++)
	{
		printf("%d \n", arr[i]);
	}
}

int main()

{

	int arr1[] = {1,2,3,4,5,6,8,7};
	int arr2[] = { 8,7,6,5,4,3,2,1 };
	int length1 = sizeof(arr1) / sizeof(arr1[0]);
	int length2 = sizeof(arr2) / sizeof(arr1[0]);
	//My_SOb(arr1, length1);
	My_printf(arr2, length2);
	My_SOb(arr2, length2);
	My_printf(arr2, length2);
	return 0;
}