#include <stdio.h>
#include <stdlib.h>

//�ӷ�
void Sum()
{
    double a,b;
    printf("����������ʵ�����ÿո������:");
    scanf("%lf %lf",&a,&b);
    printf("%.2lf+%.2lf=%.2lf\n",a,b,a+b);
}
//����
void Cut()
{
    double a,b;
    printf("����������ʵ�����ÿո������:");
    scanf("%lf %lf",&a,&b);
    printf("%.2lf-%.2lf=%.2lf\n",a,b,a-b);
}
//�˷�
void Cheng()
{
    double a,b;
    printf("����������ʵ�����ÿո������:");
    scanf("%lf %lf",&a,&b);
    printf("%.2lf��%.2lf=%.2lf\n",a,b,a*b);
}
//����
void Chu()
{
    double a,b;
    printf("����������ʵ�����ÿո������:");
    scanf("%lf %lf",&a,&b);
    printf("%.2lf��%.2lf=%.2lf\n",a,b,a/b);
}
//ȡ��
void Yv()
{
    int a,b;
    printf("�����������������ÿո������:");
    scanf("%d %d",&a,&b);
    printf("%dmod%d=%d\n",a,b,a%b);
}
void menu()
{
    printf("****************************************\n");
    printf("\n");
    printf("****************�򵥼�����**************\n");
    printf("*** 1���ӷ�                          ***\n");
    printf("*** 2������                          ***\n");
    printf("*** 3���˷�                          ***\n");
    printf("*** 4������                          ***\n");
    printf("*** 5��ȡ��                          ***\n");
    printf("****************************************\n");
    printf("\n");
    printf("*****��ѡ��1/2/3/4/5               ***\n");
    printf("*****��0�˳�����                     ***\n");
    printf("\n");
}

int main()
{
    menu();
    int n;
    while(1)
    {
        printf("����������ѡ��");
        scanf("%d",&n);
        switch(n)
        {
            case 1:Sum();break;
            case 2:Cut();break;
            case 3:Cheng();break;
            case 4:Chu();break;
            case 5:Yv();  break;
            case 0:exit(0);
            default:printf("The Order is error!\n");break;

        }
    }
    return 0;
}
