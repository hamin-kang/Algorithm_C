#include "sort.h"

void insertion_sort(int arr[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = arr[i]; // 미정렬 부분 arr[i..n-1]의 첫번 째 데이터 선택
        for (j = i; j > 0 && arr[j - 1] > key; j--) { // 정렬 부분에서 삽입할 위치 찾기
            arr[j] = arr[j - 1]; // 정렬 부분의 arr[j - 1]이 크면 뒤로 한 칸 이동
        }
        arr[j] = key; // 찾아진 위치에 선택된 데이터 삽입
    }
}