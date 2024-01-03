#include<stdio.h>
void main(){
    int r, c;
    printf("Enter the no. of row :");
    scanf("%d", &r);
    printf("\nEnter the no. of column :");
    scanf("%d", &c);

    int a[r][c], b[r][c];

    printf("Enter the elements of 1st matrix :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Elements of 1st matrix :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Elements of 2nd matrix :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("result :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}