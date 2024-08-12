//색종이
#include <stdio.h>

int main(){
    int paper, Area=0;
    int a[101][101]={0};
    int N, M;
    scanf("%d", &paper);

    for (int k=0; k<paper; k++){
        scanf("%d %d", &N, &M);
        //색종이 영역 10X10을 1로 만듦
        for (int i=0; i<10; i++){
            for (int j=0; j<10; j++){
                a[90-M+i][N+j] = 1;
            }
        }
    }
    //1인 영역 만나면 넓이 +1
    for (int i=0; i<100; i++){
        for (int j=0; j<100; j++){
            if(a[i][j] == 1){
                Area++;
            }
        }
    }
    printf("%d", Area);
    return 0;
}