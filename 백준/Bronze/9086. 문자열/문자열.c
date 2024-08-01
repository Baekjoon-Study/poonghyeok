#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int i=0; i<T; i++){
        char a[100]={0};
        scanf("%s", a);
        for (int j=0; j<100; j++){
            if (a[j] == 0){
                printf("%c%c\n", a[0], a[j-1]);
                break;
            }
        }
    }
    return 0;
}