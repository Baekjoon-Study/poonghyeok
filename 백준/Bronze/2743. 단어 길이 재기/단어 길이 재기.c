#include <stdio.h>

int main(){
    char a[101]={0};
    int length = 0;

    scanf("%100s", a);

    while (a[length]!='\0'){
        length++;
    }
    printf("%d", length);
    return 0;
}