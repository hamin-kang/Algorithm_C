#include "Sort.h"

void selectionSort(int arr[], int n) {
	int i, j, min_idx, temp;
	for (i = 0; i < n - 1; i++) { // (n - 1)번 반복
		min_idx = i; // 미정렬 부분의 첫 번째 원소를 최솟값으로 지정
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}

		// arr[i]와 arr[min_idx] 자리바꿈, 미정렬 부분의 첫 번째 원소와 최솟값의 위치 교환 
		temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	}
}