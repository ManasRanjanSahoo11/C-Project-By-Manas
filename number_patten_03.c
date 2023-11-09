#include<stdio.h>
void main(){
    int n,ch,i,j,k=1;
    printf("Enter no of line you want to print :");
    scanf("%d",&n);
    printf("Enter no of character you want to print :");
    scanf("%d",&ch);

    for(i=1;i<=n;i++){
        for(j=1;j<=ch;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
}