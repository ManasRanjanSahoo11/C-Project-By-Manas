#include<stdio.h>
void main(){
    int n;
    float sum=0;
    printf("Enter a no :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+((float)1/i);
    }
    printf("Value of series : %.2f",sum);
}