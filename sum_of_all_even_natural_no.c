#include<stdio.h>
void main(){
    int n,i,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for (i=1;i<n;i++){
        if(i%2==0)
        sum=sum+i;
    }
    printf("Sum of all even natural number : %d",sum);
}