#include "sort.h"

void shell_sort(int arr[], int n) {
    int i, j, key, gap;

    // gap을 배열 길이의 절반으로 초기화하고, 매 반복마다 반으로 줄임
    for (gap = n / 2; gap > 0; gap /= 2) {

        // gap만큼 떨어진 요소들을 삽입 정렬 방식으로 정렬
        for (i = gap; i < n; i++) {
            key = arr[i];
            j = i;

            // 현재 gap만큼 떨어진 이전 요소들과 비교하며 위치 찾기
            while (j >= gap && arr[j - gap] > key) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = key;
        }
    }
}