//二分查找 伪代码
int _1/2Search(int A[],int x) {
	int low = 0, high = n - 1, mid;
	while (low < high)
	{
		mid = (low + high) / 2;
		if (A[mid == x]) return mid;
		else - if (A[mid] > x) high = mid - 1;
		else low = mid + 1;
		
	}
}

