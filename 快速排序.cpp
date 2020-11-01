#include <stdio.h>

#define N 10

int Partition(int* arr, int low, int high);
void QuickSort(int* arr, int low, int high);
void Print(int* arr, int n);

void main(void) {
	int a[N] = { 5,6,4,2,8,1,9,7,3,0 };
	Print(a, N);
	QuickSort(a, 0, N - 1);
	Print(a, N);
}

/*
	分部函数
	作用：找出基准数所在的位置，大于左侧数组并小于右侧数字
*/
int Partition(int* arr, int low, int high) {
	int pivot = arr[low];
	while (low < high) {
		while (low < high && arr[high] > pivot)
			high--;
		arr[low] = arr[high];
		while (low < high && arr[low] < pivot)
			low++;
		arr[high] = arr[low];
	}
	arr[low] = pivot;
	return low;
}

/*
	快速排序
*/
void QuickSort(int* arr, int low, int high) {
	if (low < high) {
		int pivotpos =  Partition(arr, low, high);
		QuickSort(arr, low, pivotpos-1);
		QuickSort(arr, pivotpos + 1, high);
	}
}

void Print(int* arr, int n) {//打印函数
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}