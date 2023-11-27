#include<stdio.h>
void main(){
    int term,sum=0,k=1;
    printf("enter no of terms :");
    scanf("%d",&term);

    for(int i=1;i<=term;i++){
        sum=sum+k;
        k=k*10+1;
    }

    printf("Sum = %d",sum);
}