#include <stdio.h>
#include <limits.h> //정수형의 한계를 알려주는 헤더파일 

int main(void){

    short s_money = SHRT_MAX; //short형의 상한치 최대값으로 초기화한다 32767
    unsigned short u_money = USHRT_MAX; //s 최대값으로 초기화한다 65535

    s_money = s_money + 1; //오버플로우 발생
    printf("s_money = %d\n",s_money);

    u_money= u_money +1; //오버플로우 발생
    printf("u_money = %d\n",u_money);

    return 0;
}