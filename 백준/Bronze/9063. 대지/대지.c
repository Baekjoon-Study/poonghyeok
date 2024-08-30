#include <stdio.h>

int main(){
    int N, x, y;
    int max_x=-10000, min_x=10000, max_y=-10000, min_y=10000;
    int res_x, res_y;
    scanf("%d", &N);
    for (int i=0; i<N; i++){
        scanf("%d %d", &x, &y);
        if(x>max_x){
            max_x = x;
        }
        if(x<min_x){
            min_x = x;
        }
        if(y>max_y){
            max_y = y;
        }
        if(y<min_y){
            min_y = y;
        }
    }
    res_x = max_x - min_x;
    res_y = max_y - min_y;
    printf("%d", res_x*res_y);
    return 0;
}