#include<stdio.h>
int main(){
    int x,i;
    printf("Enter a number :");
    scanf("%d",&x);

    for(i=1;i<x;i++){
        if(x%i==0){
            break;
        }
    }
    if(i==x)
    printf("%d Is Prime.",x);
    else
    printf("%d Is Not Prime.",x);
    return 0;
}