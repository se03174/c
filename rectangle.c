#include <stdio.h>

int main(){

    double w; //�簢���� ���� �Ǽ��������� �޴´�.
    double h; //�簢���� ����
    double area; //�簢���� ����
    double perimeter; //�簢���� �ѷ�

    printf("�簢���� ���� ���� �Է��Ͻÿ�: "); //�簢���� ���� �� �Է�
    scanf("%lf", &w); //long float ���� double��

    printf("�簢���� ���� ���� �Է��Ͻÿ�: ");  //�簢���� ���� �� �Է�
    scanf("%lf", &h);

    area = w*h; //�簢���� ���� ���ϴ� �� ����*����

    printf("�簢���� ���� : %lf\n",area);

    perimeter = 2 * ( w + h); //�簢���� �ѷ� ���ϴ� �� 2 * (����+����)

    printf("�簢���� �ѷ� : %lf\n", perimeter);

    return 0;
    

}