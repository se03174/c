/* ȯ���� ����ϴ� ���α׷�*/

#include <stdio.h>

int main(){

    float rate;
    float usd;
    int krw;

    printf("�޷��� ���� ��ȭ ȯ���� �Է��Ͻÿ� : ");
    scanf("%f", &rate);

    printf("��ȭ �ݾ��� �Է��Ͻÿ�");
    scanf("%d", &krw);

    usd = krw / rate;

    printf("��ȭ %d���� %f�޷� �Դϴ�.", krw , usd);

    return 0;

}