#include <stdio.h>
#include "sort.h"

void print_array(int arr[], int n);

int main(void) {
	int arr[100] = {
	64, 25, 12, 22, 11, 90, 45, 67, 34, 78,
	83, 16, 54, 39, 91, 72, 48, 27, 60, 15,
	96, 33, 70, 41, 88, 59, 21,  5, 84, 50,
	77, 19, 62, 95, 38,  8, 56, 29, 99, 44,
	68, 14, 81, 52, 36, 74, 93,  2, 47, 65,
	18, 86, 61, 30,  7, 55, 98, 42, 71, 24,
	 3, 89, 51, 76, 32, 94, 13, 63, 26, 80,
	58, 35,  9, 87, 49, 69, 20, 75, 40, 92,
	31, 85, 57, 10, 66, 28, 73, 46, 97, 23,
	 4, 79, 53, 37, 82, 17,  6,  1, 43, 100
	};
	int n = sizeof(arr) / sizeof(arr[0]); // 100

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