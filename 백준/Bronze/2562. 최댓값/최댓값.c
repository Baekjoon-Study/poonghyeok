#include <stdio.h>

int main(){
    int max=0, arr[8], number;
    for (int i=0; i<9; i++){
        scanf("%d", &arr[i]);
    }

    for (int j=0; j<9; j++){
        if (max < arr[j]){
            max = arr[j];
            number = j+1;
        }
    }
    printf("%d\n", max);
    printf("%d", number);

    return 0;
}