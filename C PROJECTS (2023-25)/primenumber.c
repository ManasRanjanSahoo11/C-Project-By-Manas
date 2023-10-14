#include<stdio.h>
void main()
{
    int a,i;
    printf("enter a number\n");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
        if(i%a==0)
        break;
    }
    if(a==i)
    printf("%d is a prime number",a);
    else
    printf("%d is not a prime number",a);
}