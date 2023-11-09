#include<stdio.h>
void main(){
    int a,b;
    printf("Give range :");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    if(i%7==2 || i%7==3)
    printf("%d ",i);
}