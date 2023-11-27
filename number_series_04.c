#include<stdio.h>
#include<math.h>
void main(){
    int n,i,term,sum=0;
    printf("enter a number :");
    scanf("%d",&n);

    printf("enter the no of term :");
    scanf("%d",&term);

    for(i=1;i<=term;i++){
        sum=sum+pow(n,i);
    }

    printf("Sum = %d",sum);
}