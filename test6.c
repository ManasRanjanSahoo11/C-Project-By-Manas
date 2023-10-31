#include<stdio.h>
void main(){
    int a,b,mul;
    printf("enter first integer");
    scanf("%d",&a);
    printf("enter second integer");
    scanf("%d",&b);
    if(b%a==0)
    printf("multiplied !");
    else
    printf("Not multiplied !");



// To print all even number in between 1 to 50.

    for(int i=1;i<=50;i++)
    if(i%2==0)
    printf("%d\t",i);
}