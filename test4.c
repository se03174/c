#include <stdio.h>

int main(){

    float x; //�Ǽ��� x ��
    float ans; //3�� ���׽��� ��� ��

    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%f", &x);

    ans = 3 * x  * x + 7 * x + 11;

    printf("���׽��� ���� %f",ans);

    return 0;
    
}