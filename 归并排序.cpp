#include <stdio.h>
/********************/
/*£¡£¡£¡Î´Íê³É£¡£¡£¡*/
/********************/

#define N 16

void Merge(int* a, int low,int mid, int high);
void MergeSort(int* a, int low, int high);
void Print(int* a, int n);

int b[N];

void main(void) {
	int a[N] = { 1,9,12,7,0,8,6,5,15,13,2,4,11,3,10,14};
	Print(a, N);
	MergeSort(a, 0, N - 1);
	Print(a, N);
}

void Merge(int* a, int low,int mid, int high) {
	int i,j,k;
	for (int k = low; k <= high; k++)
		b[k] = a[k];
	for ( i = low, j = mid + 1,k = i; i <= mid && j <= high; k++) {
		if (b[i] <= b[j]) {
			a[k] = b[i++];
		}
		else {
			a[k] = b[j++];
		}
	}
	while (i <= mid) {
		a[k++] = b[i++];
	}
	while (j <= high) {
		a[k++] = b[j++];
	}
}
/*¹é²¢ÅÅÐò*/
void MergeSort(int* a, int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		MergeSort(a, low, mid);
		MergeSort(a, mid + 1, high);
		Merge(a, low, mid, high);
	}
}

void Print(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}