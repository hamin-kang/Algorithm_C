#include <stdio.h>
#include "sort.h"

void print_array(int arr[], int n);

int main(void) {
	int arr[10] = { 64, 25, 12, 22, 11, 90, 45, 67, 34, 78 };
	int n = sizeof(arr) / sizeof(arr[0]); // 10

	printf("정렬 전: ");
	print_array(arr, n);

	insertion_sort(arr, n);
	
	printf("정렬 후: ");
	print_array(arr, n);
}

void print_array(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}