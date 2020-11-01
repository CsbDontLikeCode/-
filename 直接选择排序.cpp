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

/*ֱ��ѡ������
	��������ָ�룬�������е�Ԫ�ذ�����˳������*/
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

/*��ӡ����
*/
void Print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}