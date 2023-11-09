#include<stdio.h>
void main(){
    int n,i,j,k=1;
    printf("Enter no of line you want to print :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
}