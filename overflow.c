#include <stdio.h>
#include <limits.h> //�������� �Ѱ踦 �˷��ִ� ������� 

int main(void){

    short s_money = SHRT_MAX; //short���� ����ġ �ִ밪���� �ʱ�ȭ�Ѵ� 32767
    unsigned short u_money = USHRT_MAX; //s �ִ밪���� �ʱ�ȭ�Ѵ� 65535

    s_money = s_money + 1; //�����÷ο� �߻�
    printf("s_money = %d\n",s_money);

    u_money= u_money +1; //�����÷ο� �߻�
    printf("u_money = %d\n",u_money);

    return 0;
}