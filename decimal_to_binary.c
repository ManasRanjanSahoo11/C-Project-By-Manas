#include<stdio.h>
void main(){
    int num,i=0,a[15];
    printf("Enter a decimal number :");
    scanf("%d",&num);

    while (num!=0)
    {
        a[i]=num%2;
        num=num/2;
        i++;   
    }

    for(i=i-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}