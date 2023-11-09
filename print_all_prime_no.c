#include<stdio.h>
void main(){
    int r1,r2,i,j;
    printf("Enter the range :");
    scanf("%d%d",&r1,&r2);
    for(i=r1;i<=r2;i++){
        for(j=2;j<r2;j++){
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }
}