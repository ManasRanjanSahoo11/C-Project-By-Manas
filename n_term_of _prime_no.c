#include<stdio.h>
void main(){
    int n,x=2,i;
    printf("Enter number");
    scanf("%d",&n);
    while(n){
        for(i=2;i<x;i++){
            if(x%i==0)
            break;
        }
        if (i==x)
        {
            printf("%d\n",x);
            n--;
        }
        x++;
        
    }
}