#include "sort.h"

void insertion_sort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // key보다 큰 원소들을 오른쪽으로 한 칸씩 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // 적절한 위치에 key 삽입
        arr[j + 1] = key;
    }
}