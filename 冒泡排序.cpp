#include <stdio.h>

#define N 10

void BubbleSort(int* arr, int n);
void Print(int* arr, int n);

void main(void) {
	int a[N] = { 9,5,1,4,2,3,6,8,7,0 };
	Print(a, N);
	BubbleSort(a, N);
	Print(a, N);
}

/*
	冒泡排序函数，输入数组名(int类型指针)和数组长度(int类型)
	函数作用：将数组中元素按升序进行排列
*/
void BubbleSort(int* arr, int n) { 
	for (int i = N-1; i > 0; i--) {
		/*	flag作用：检查每一轮冒泡是否存在元素位置交换，
			若无，则证明列表中已经有序，可直接退出循环*/
		bool flag = false;              
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = true;
			}
		}
		if (flag == false) break;
	}
}

/*
	打印数组函数，输出数组名(int类型指针)和数组长度(int类型)
	函数作用：在屏幕上由前向后依次打印出数组中各个元素
*/
void Print(int* arr, int n) { 
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}