#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter three sides of a triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b > c && a+c > b && b+c > a)
        printf("valid triangle");
    else
        printf("Not valid triangle");
}