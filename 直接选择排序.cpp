#include <stdio.h>

#define N 10

void SelectSort(int* arr, int n);
void Print(int* arr, int n);

void main(void) {
	int a[N] = { 1,8,3,4,2,6,5,9,7,0 };
	Print(a, N);
	SelectSort(a, N);
	Print(a, N);
}

/*直接选择排序
	输入数组指针，将数组中的元素按递增顺序排列*/
void SelectSort(int* arr, int n) {
	for (int i = 0; i < n-1; i++) {
		int min = i;
		for (int j = i+1; j < n; j++) {
			if (arr[j] < arr[min])
				min = j;
		}
		if (min != i) {
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

/*打印函数
*/
void Print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}