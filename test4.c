#include <stdio.h>

int main(){

    float x; //실수형 x 값
    float ans; //3차 다항식의 결과 값

    printf("실수를 입력하시오: ");
    scanf("%f", &x);

    ans = 3 * x  * x + 7 * x + 11;

    printf("다항식의 값은 %f",ans);

    return 0;
    
}