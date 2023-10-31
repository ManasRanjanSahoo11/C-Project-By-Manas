#include<stdio.h>
void main()
{
    int n1,n2,i,j;
    printf("Enter two number :");
    scanf("%d%d",&n1,&n2);
    for(i=2;i<n1;i++){
        if(n1%i==0)
        break;
    }

    for(j=2;j<n2;j++){
        if(n2%j==0)
        break;
    }
    
    if(i==n1 && j==n2)
    printf("%d and %d is prime",n1,n2);
    else
    printf("%d and %d is not prime",n1,n2);
}