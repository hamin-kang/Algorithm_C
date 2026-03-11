#include <stdio.h>
#include "Sort.h"

void printArray(int arr[], int n);

int main(void) {
	int arr[10] = { 64, 25, 12, 22, 11, 90, 45, 67, 34, 78 };
	int n = sizeof(arr) / sizeof(arr[0]); // 10

	bubbleSort(arr, n);
	
	printArray(arr, n);
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}