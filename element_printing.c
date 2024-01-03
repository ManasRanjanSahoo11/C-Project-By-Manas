#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("enter the no of row :");
    scanf("%d", &r);
    printf("enter the no of column :");
    scanf("%d", &c);

    int a[r][c];

    printf("enter the all elements :\n");
    for (int i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements are :\n");
    for (int i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < c; i++)
    {
        if (j % 2 == 0)
        {
            for (j = r - 1; j >= 0; j--)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (j = 0; j < r; j++)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}