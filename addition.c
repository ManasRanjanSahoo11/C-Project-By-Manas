#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,sum;
    float p;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    printf("enter the first number :");
    scanf("%d",&c);
    printf("enter the second number :");
    scanf("%d",&d);
    printf("enter the first number :");
    scanf("%d",&e);
    printf("enter the second number :");
    scanf("%d",&f);

    sum=a+b+c+d+e+f;
    printf("the sum is =%d",sum);

    p=(sum/600.000000)*100;
    printf(" total percentage : %f",p);
}