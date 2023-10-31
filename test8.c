#include<stdio.h>
void main(){
    int n;
    printf("Enter a integer :");
    scanf("%d",&n);
    
    if(n>0 && n%2==0)
    printf("positive Even");
    if(n<0 && n%2==0)
    printf("negative Even");
    if(n>0 && n%2 != 0)
    printf("Positive Odd");
    if(n<0 && n%2 != 0)
    printf("negative Odd");
    if(n==0)
    printf("Even");
}