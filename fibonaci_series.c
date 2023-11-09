#include<stdio.h>
void main(){
    int n,n1=0,n2=1,n3;
    printf("Enter the no of terms :");
    scanf("%d",&n);
    printf("Financi series = %d\t%d",n1,n2);
    for(int i=3;i<=n;i++)
    {
        printf("%d\t",n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
}