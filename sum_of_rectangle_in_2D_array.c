#include <stdio.h>

void main()
{
    int r, c;
    printf("Enter no. of rows :");
    scanf("%d", &r);

    printf("Enter no. of column :");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter the elements ");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Elements are\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    int l1, r1, l2, r2,sum=0;
    printf("Enter 1st co-ordinate :");
    scanf("%d%d",&l1,&r1);
    printf("Enter 2nd co-ordinate :");
    scanf("%d%d",&l2,&r2);

    printf("This is the rectangle:\n");
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum+=a[i][j];
        }
    }

    printf("\nSum of rectagle :%d",sum);
}