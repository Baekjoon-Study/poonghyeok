#include <stdio.h>

int main(){
    char S[1000];
    int i; 
    scanf("%s", S); //gets(S);
    scanf("%d", &i);
    printf("%c\n", S[i-1]);
    return 0;
}