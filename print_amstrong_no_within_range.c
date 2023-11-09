#include <stdio.h>
#include <math.h>
void main()
{
    int n1, n2, i, rem1, rem2;
    printf("enter a range :");
    scanf("%d%d", &n1, &n2);

    for (i = n1; i <= n2; i++)
    {
        int sum = 0, count = 0;
        int temp = i;

        while (i != 0)
        {
            rem1 = i % 10;
            i = i / 10;
            count++;
        }

        i = temp;

        while (i != 0)
        {
            rem2 = i % 10;
            sum = sum + pow(rem2, count);
            i = i / 10;
        }

        if (sum == temp)
            printf("%d ", sum);
    }
}