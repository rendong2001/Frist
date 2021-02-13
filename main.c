#include <stdio.h>
#include <stdlib.h>

//加法
void Sum()
{
    double a,b;
    printf("请输入两个实数【用空格隔开】:");
    scanf("%lf %lf",&a,&b);
    printf("%.2lf+%.2lf=%.2lf\n",a,b,a+b);
}
//减法
void Cut()
{
    double a,b;
    printf("请输入两个实数【用空格隔开】:");
    scanf("%lf %lf",&a,&b);
    printf("%.2lf-%.2lf=%.2lf\n",a,b,a-b);
}
//乘法
void Cheng()
{
    double a,b;
    printf("请输入两个实数【用空格隔开】:");
    scanf("%lf %lf",&a,&b);
    printf("%.2lf×%.2lf=%.2lf\n",a,b,a*b);
}
//除法
void Chu()
{
    double a,b;
    printf("请输入两个实数【用空格隔开】:");
    scanf("%lf %lf",&a,&b);
    printf("%.2lf÷%.2lf=%.2lf\n",a,b,a/b);
}
//取余
void Yv()
{
    int a,b;
    printf("请输入两个整数【用空格隔开】:");
    scanf("%d %d",&a,&b);
    printf("%dmod%d=%d\n",a,b,a%b);
}
void menu()
{
    printf("****************************************\n");
    printf("\n");
    printf("****************简单计算器**************\n");
    printf("*** 1、加法                          ***\n");
    printf("*** 2、减法                          ***\n");
    printf("*** 3、乘法                          ***\n");
    printf("*** 4、除法                          ***\n");
    printf("*** 5、取余                          ***\n");
    printf("****************************************\n");
    printf("\n");
    printf("*****请选择：1/2/3/4/5               ***\n");
    printf("*****按0退出程序                     ***\n");
    printf("\n");
}

int main()
{
    menu();
    int n;
    while(1)
    {
        printf("请输入您的选择：");
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
