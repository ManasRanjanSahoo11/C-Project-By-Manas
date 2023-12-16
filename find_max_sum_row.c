#include <stdio.h>
#include <limits.h>

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

    int sum, max_r = INT_MIN;
    printf("Row sum :\n");
    for (int i = 0; i < r; i++)
    {
        sum = 0;

        for (int j = 0; j < c; j++)
        {
            sum += a[i][j];
        }
        printf("%d ", sum);
        printf("\n");
        if (sum > max_r)
            max_r = sum;
    }

    printf("Maximum row sum :%d",max_r);
}