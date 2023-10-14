#include<stdio.h>
void sum(int *n1,int *n2);
void main()
{
    int a,b,c;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("enter the two numer :\n");
    scanf("%d%d",&a,&b);
    sum(p1,p2);
}
void sum(int *n1,int *n2)
{
    int c;
    c=*n1+*n2;
    printf("sum of two number is = %d",c);
}