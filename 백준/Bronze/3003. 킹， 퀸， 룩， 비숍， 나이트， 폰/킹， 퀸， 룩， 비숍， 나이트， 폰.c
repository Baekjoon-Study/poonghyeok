#include <stdio.h>

int main(){
    int a[6] = {1,1,2,2,2,8}, my;
    for (int i=0; scanf("%d", &my)==1; i++){
        printf("%d ", a[i]-my);
    }
    return 0;
}