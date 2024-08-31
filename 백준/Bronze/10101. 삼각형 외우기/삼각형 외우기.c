#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    
    // 각도를 입력받음
    scanf("%d", &angle1);
    scanf("%d", &angle2);
    scanf("%d", &angle3);
    
    int sum = angle1 + angle2 + angle3;
    
    // 삼각형 종류 판별
    if (sum != 180) {
        printf("Error\n");
    } else if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
        printf("Equilateral\n");
    } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
    
    return 0;
}
