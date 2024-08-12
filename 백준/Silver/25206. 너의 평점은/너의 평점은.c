//너의 평점은
#include <stdio.h>
#include <string.h>

int main(){
    char word[51];
    float credit, score, result;
    char rating[3];   
    float sum_rating = 0.0, sum_credit = 0.0;

    for(int i=0; i<20; i++){
        scanf("%s %f %s", word, &credit, rating);
        //등급->점수 변환
        if(strcmp(rating, "P") != 0){
            switch(rating[0]){
                case 'A': score = 4.0; break;
                case 'B': score = 3.0; break;
                case 'C': score = 2.0; break;
                case 'D': score = 1.0; break;
                case 'F': score = 0.0; break;
                default: continue;
            }
            if (rating[1] == '+'){
                score += 0.5;
            }
            sum_rating += (credit * score); //(학점 * 과목평점 총합)
            sum_credit += credit; //(학점 총합)
        }
    }
    if(sum_credit > 0){
        result = sum_rating / sum_credit;
        printf("%.6f\n", result);
    }
    return 0;
}