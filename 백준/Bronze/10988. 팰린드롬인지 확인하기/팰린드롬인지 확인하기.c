#include <stdio.h>
#include <string.h>

int main(){
    char word[101];
    scanf("%s", word);
    int len = strlen(word);
    int result = 1;

    for(int i=0; i<len/2; i++){
        if (word[i] != word[len-1-i]){
            result = 0;
            break;
        }
    }
    printf("%d", result);
    return 0;
}


