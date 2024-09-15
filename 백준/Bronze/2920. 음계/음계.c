#include <stdio.h>

int main() {
    int arr[8];
    
    // 8개의 숫자 입력받기
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 오름차순인지 확인
    int ascending = 1;
    int descending = 1;
    
    for (int i = 0; i < 7; i++) {
        if (arr[i] < arr[i + 1]) {
            descending = 0; // 오름차순이기 때문에 내림차순은 아님
        } else if (arr[i] > arr[i + 1]) {
            ascending = 0; // 내림차순이기 때문에 오름차순은 아님
        }
    }
    
    if (ascending) {
        printf("ascending\n");
    } else if (descending) {
        printf("descending\n");
    } else {
        printf("mixed\n");
    }
    
    return 0;
}
