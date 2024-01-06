#include<stdio.h>

int sumNatural(int n){
    if(n==1){
        return 1;
    }
    return n+sumNatural(n-1);
}
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    printf("Sum : %d",sumNatural(n));
    return 0;
}