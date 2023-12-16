#include<stdio.h>
#include<limits.h>

void main(){
    int r, c;
    printf("Enter no. of rows :");
    scanf("%d",&r);

    printf("Enter no. of column :");
    scanf("%d",&c);
    
    int a[r][c];

    printf("Enter the elements ");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    
    printf("Elements are\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    int max=INT_MIN;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j] > max){
                max=a[i][j];
            }
        }
    }
    printf("\nMaximum Element :%d",max);

    int min= a[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j] < min){
                min=a[i][j];
            }
        }
    }
    printf("\nManimum Element :%d",min);
}