#include <stdio.h>

#define N 10 

void HeapSort(int* arr, int n);
void Print(int* arr, int n);

void main(void) {
	int a[N] = { 1,4,6,3,2,9,8,5,7,0 };
	Print(a, N);
	HeapSort(a, N);
	Print(a, N);
}

/*¶ÑÅÅÐò
*/
void HeapSort(int* arr, int n) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		for (int j = 2 * i + 1; j < n; j = j * 2 + 1) {
			if (j + 1 < n && arr[j + 1] > arr[j]) 
				j++;
			if (arr[i] >= arr[j]) {
				break ;
			}
			else {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				i = j;
			}
		}
	}
	
	int temp;
	temp = arr[0];
	arr[0] = arr[n - 1];
	arr[n - 1] = temp;
	n--;

	if(n >= 1) {
		HeapSort(arr, n);
	}
}

void Print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}