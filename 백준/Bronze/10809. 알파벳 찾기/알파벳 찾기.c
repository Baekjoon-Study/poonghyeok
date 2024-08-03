#include <stdio.h>
#include <string.h>

int main(){
    char S[101];
    int Alpha[26];
    scanf("%s", S);
    for (int i=0; i<26; i++){
        Alpha[i] = -1;
    }

    int len = strlen(S);
    for (int i=0; i<len; i++){
        int index = S[i]-'a';
        if (Alpha[index]==-1){
            Alpha[index] = i;
        }
    }
    for (int i=0; i<26; i++){
        printf("%d ", Alpha[i]);
    }
    return 0;
}