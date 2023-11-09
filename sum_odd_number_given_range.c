#include<stdio.h>
void main(){
    int a,b,sum=0;
    printf("Enter a range :");
    scanf("%d%d",&a,&b);

    for(int i=a;i<=b;i++){
        if(i%2==0)
        sum=sum+i;
    }
    printf("sum of Odd number is :%d",sum);
}