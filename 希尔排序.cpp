#include <stdio.h>

#define N 10

void ShellSort(int* arr, int n);
void Print(int* arr, int n);

void main(void) {
	int a[N] = { 9,6,3,0,2,8,7,5,1,4};
	Print(a, N);
	ShellSort(a, N);
	Print(a, N);
}

void ShellSort(int* arr, int n) { //Ï£¶ûÅÅÐò
	for (int dk = n / 2; dk >= 1; dk /= 2) {
		for (int i = dk; i <n; i++) {
			int temp = arr[i];
			int j;
			for ( j = i - dk; j >= 0 && temp < arr[j]; j -= dk) {
				arr[j + dk] = arr[j];
			}
			arr[j + dk] = temp;
		}
	}
}

void Print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}