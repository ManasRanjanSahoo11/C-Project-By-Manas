#include<stdio.h>
void main(){
    int a,i;
    printf("enter a number :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    if(i%2==0)
    printf("%d * %d = %d\n",i,i,i*i);
}