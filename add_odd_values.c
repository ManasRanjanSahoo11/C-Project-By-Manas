#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter 5 number");
    while(n<=5){
        scanf("%d",&n);
        if(n%2 != 0)
        sum=sum+n;
    }
    printf("Addition of odd values : %d",sum);
}