#include <stdio.h>

int main(){
    int a[10], b[42]={0}, count=0;
    for (int i=0; i<10; i++){
        scanf("%d", &a[i]);
        a[i] = a[i] % 42;
        b[a[i]] = 1;
    }
    for (int i=0; i<42; i++){
        if(b[i] == 1){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}