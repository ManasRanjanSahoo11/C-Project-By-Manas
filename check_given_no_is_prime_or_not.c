#include<stdio.h>
void main(){
    // int n,i;
    int n,i,count=0;
    printf("Enter a number :");
    scanf("%d",&n);
    // for (i = 2 ; i < n; i++)
    for (i = 1 ; i <= n; i++)
    {
        if(n%i==0)
        // break;
        count++;
    }
    // if(i==n)
    if(count==2)
    printf("Prime");
    else
    printf("Not Prime");
    
}