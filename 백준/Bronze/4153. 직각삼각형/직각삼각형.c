#include <stdio.h>

int main(){
    int a, b, c;
    int sum, longst;

    while (1){
        scanf("%d %d %d", &a, &b, &c);
        if(a>b && a>c){
            longst = a*a;
            sum = (b*b) + (c*c);
        }
        else if(b>c){
            longst = b*b;
            sum = (a*a) + (c*c);
        }
        else{
            longst = c*c;
            sum = (a*a) + (b*b);
        }

        if (a==0 && b==0 && c==0){
            break;
        }
        else if (longst == sum){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}