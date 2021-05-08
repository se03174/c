//사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력

#include <stdio.h>

int main (){

    int x; //첫번째 정수를 저장할 변수
    int y; //두번째 정수를 저장할 변수
    int sum; //2개의 정수의 합을 저장할 변수

    printf("첫번째 숫자를 입력하시오: ");
    scanf("%d" ,&x);

    printf("두번째 숫자를 입력하시오: ");
    scanf("%d" , &y);

    sum = x + y;

    printf("두수의 합 : %d",sum);

    return 0;


}