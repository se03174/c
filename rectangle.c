#include <stdio.h>

int main(){

    double w; //사각형의 가로 실수형식으로 받는다.
    double h; //사각형의 세로
    double area; //사각형의 면적
    double perimeter; //사각형의 둘레

    printf("사각형의 가로 값을 입력하시오: "); //사각형의 가로 값 입력
    scanf("%lf", &w); //long float 약자 double형

    printf("사각형의 세로 값을 입력하시오: ");  //사각형의 세로 값 입력
    scanf("%lf", &h);

    area = w*h; //사각형의 넓이 구하는 식 가로*세로

    printf("사각형의 넓이 : %lf\n",area);

    perimeter = 2 * ( w + h); //사각형의 둘레 구하는 식 2 * (가로+세로)

    printf("사각형의 둘레 : %lf\n", perimeter);

    return 0;
    

}