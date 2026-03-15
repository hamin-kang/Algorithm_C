#include "sort.h"
#include <stdbool.h>

void advanced_bubble_sort(int arr[], int n) {
	// 개선된 버블 정렬
	// 1: 반복문을 도는 동안 자리를 바꾸는 작업이 한 번도 일어나지 않았다면 break
	// 2: 정렬된 부분 비교 대상에서 제외
	int i, j, temp;
	bool swapped;

	for (i = 0; i < n - 1; i++) {
		swapped = false;

		for (j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}

		if (swapped == false) {
			break;
		}
	}

}