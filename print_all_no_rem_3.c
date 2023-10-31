#include<stdio.h>
void main(){
    int n,i;
    printf("enter an integer");
    scanf("%d",&n);
    for(i=1;i<=100;i++)
    if(i/n && i%n==3)
    printf("%d\n",i);
}