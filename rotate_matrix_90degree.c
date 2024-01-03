#include<stdio.h>
void main(){
    int n,i,j;
    printf("enter the no. of row/column: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the all elements :\n");
    for ( i = 0; i < n; i++)
    {
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Elements are :\n");

    for ( i = 0; i < n; i++)
    {
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // Inplace of Tranpose of the matrix 
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

//  printf("Tranpose of matrix \n");
//     for ( i = 0; i < n; i++)
//     {
//         for(j=0;j<n;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }

// rotate 90 degree of the matrix

    for(i=0;i<n;i++){
        j=0;
        int k=n-1;
        while (j<k)
        {
            int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
            j++;
            k--;
        }
        
    }

    printf("Rotated matrix in 90 degree \n");
    for ( i = 0; i < n; i++)
    {
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}