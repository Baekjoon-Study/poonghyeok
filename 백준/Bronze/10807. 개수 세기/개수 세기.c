#include <stdio.h>

int main(){
    int T, a[100];;
    scanf("%d", &T);

    for (int i=0; i<T; i++){
        scanf("%d", &a[i]);
    }
    int x;
    int y=0;
    scanf("%d", &x);
    for (int j=0; j<T; j++){
        if (x == a[j]){
            y++;
        }
    }
    printf("%d", y);
    return 0;
}