#include<stdio.h>
#include<math.h>
void main(){
    int n,i,j;
    printf("Enter no of line you want to print :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            printf("%d ",pow(i,j));
        }
        printf("\n");
    }
}