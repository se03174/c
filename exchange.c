/* 환율을 계산하는 프로그램*/

#include <stdio.h>

int main(){

    float rate;
    float usd;
    int krw;

    printf("달러에 대한 원화 환율을 입력하시오 : ");
    scanf("%f", &rate);

    printf("원화 금액을 입력하시오");
    scanf("%d", &krw);

    usd = krw / rate;

    printf("원화 %d원은 %f달러 입니다.", krw , usd);

    return 0;

}