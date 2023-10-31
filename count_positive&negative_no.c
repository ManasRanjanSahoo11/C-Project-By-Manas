#include<stdio.h>
void main(){
    int num=1,p=0,n=0;
    printf("Enter 5 number");
    while (num<=5)      
    {
        scanf("%d",&num);
        if(num>0)
        p++;
        if(num<0)
        n++;
    }
    printf("Total number of positive no =%d\n",p);
    printf("Total number of negative no =%d",n);
    
}