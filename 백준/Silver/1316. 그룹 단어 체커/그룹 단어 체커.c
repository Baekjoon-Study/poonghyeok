//그룹 단어 체커

//알파벳 한 번 나오면 연속되게 나오고 떨어지면 안 됨.
//count++
//한 번 나온 알파벳이 다른 알파벳으로 전환된 후 또 나오면 카운트x.
#include <stdio.h>
#include <string.h>

int main(){
    int N; //단어의 개수
    char word[101];
    int count=0;
    scanf("%d", &N);
    //반복 입력
    for (int i=0; i<N; i++){
        scanf("%s", word);
        int len = strlen(word);
        char alpha[26] = {0}; //알파벳
        for (int j=0; j<len; j++){
            int ch = word[j]-'a';
            if (alpha[ch] != 0){
                count--;
                break;
            }
            if(word[j] != word[j+1]){
                alpha[ch]++;
            }
        }
        count++;
    }
    printf("%d", count);
    return 0;
}