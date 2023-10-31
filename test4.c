#include<stdio.h>
void main(){
    int p,q,r,s;
    printf("Enter 4 Integers :");
    scanf("%d%d%d%d",&p,&q,&r,&s);

    if((q>r) && (s>p) && (r+s) > (p+q) && (q>0) && (r>0) && (s>0) && (p%2==0))
        printf("Correct Values");    
    else
    printf("Wrong Values");
    
}