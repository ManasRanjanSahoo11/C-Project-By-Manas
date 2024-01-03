#include<stdio.h>
void main(){
    int r,c,i,j;
    printf("enter the no. of row\n");
    scanf("%d",&r);

    printf("enter the no. of column\n");
    scanf("%d",&c);

    int a[r][c];

    printf("enter the all elements \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("elements are:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix :\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}