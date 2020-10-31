#include <stdio.h>

#define N 10

void InsertSort(int* arr, int n);
void Print(int* arr, int n);

int main(void) {
	int arr[N] = { 0,3,6,7,2,5,1,4,9,8 };
	Print(arr, N);
	InsertSort(arr, N);
	Print(arr, N);
}

void BinaryInsertSort(int* arr, int n) {//ÕÛ°ë²åÈëÅÅĞò
	int temp, i, j, low, high, mid;
	for (i = 1; i < N; i++) {
		temp = arr[i];
		low = 0;
		high = i - 1;
		mid = (low + high) / 2;
		while (low <= high) {                /*¡ıÕÛ°ë²éÕÒ¡ı*/
			if (arr[mid] > temp) {
				high = mid-1;
			}
			else low = mid+1;

			mid = (low + high) / 2;
		}                                    /*¡üÕÛ°ë²éÕÒ¡ü*/
		
		for (j = i - 1; j >= mid; j--) {     /*¡ıÒÆ¶¯ÔªËØ¡ı*/
			arr[j + 1] = arr[j];
		}
		arr[high + 1] = temp;                 /*¡üÒÆ¶¯ÔªËØ¡ü*/
	}
}

void Print(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}