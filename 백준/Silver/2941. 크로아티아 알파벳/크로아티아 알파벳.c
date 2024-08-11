//크로아티아 알파벳
#include <stdio.h>
#include <string.h>

//c= c- dz= d- lj nj s= z=

int main(){
    char word[101];
    scanf("%s", word);
    int len = strlen(word);
    int count = 0;

    for (int i=0; i<len; i++){
        //=,- 나올 경우 앞에거랑 하나 취급(카운트 -1)
        if (word[i] == '=' || word[i] == '-'){
            count--;
        }
        //z, j일 경우 앞에거가 d, l n인지 확인
        if (i>0 && word[i] == 'z'){
            if(word[i-1] == 'd' && word[i+1] == '='){
                count--;
            }
        }
        else if (i>0 && word[i] == 'j'){
            if (word[i-1] == 'l' || word[i-1] == 'n'){
                count--;
            }
        }
        if (word[i] != '\0'){
            count ++;
        }
    }
    printf("%d", count);
    return 0;
}