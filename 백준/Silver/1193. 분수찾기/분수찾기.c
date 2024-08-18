// 분수찾기
#include <stdio.h>

int main(){
    int X;
    scanf("%d", &X);
    
    int count = 0;
    int line = 1;
    int numerator, denominator;
    
    while (count < X) {
        for (int i = 1; i <= line; i++) {
            count++;
            if (count == X) {
                if (line % 2 == 0) {
                    numerator = i;
                    denominator = line - i + 1;
                } else {
                    numerator = line - i + 1;
                    denominator = i;
                }
                break;
            }
        }
        line++;
    }
    
    printf("%d/%d\n", numerator, denominator);
}