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
	ð��������������������(int����ָ��)�����鳤��(int����)
	�������ã���������Ԫ�ذ������������
*/
void BubbleSort(int* arr, int n) { 
	for (int i = N-1; i > 0; i--) {
		/*	flag���ã����ÿһ��ð���Ƿ����Ԫ��λ�ý�����
			���ޣ���֤���б����Ѿ����򣬿�ֱ���˳�ѭ��*/
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
	��ӡ���麯�������������(int����ָ��)�����鳤��(int����)
	�������ã�����Ļ����ǰ������δ�ӡ�������и���Ԫ��
*/
void Print(int* arr, int n) { 
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}