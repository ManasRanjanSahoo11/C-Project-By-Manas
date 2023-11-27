#include<stdio.h>
void  main(){
    int i,term,sum=0,k=1;
    printf("enter no of terms :");
    scanf("%d",&term);

    for(i=1;i<=term;i++){
        sum=sum+k;
        k=k+i;
    }
    printf("sum = %d",sum);
}