#include<stdio.h>
void main()
{
    int n, i, fact = 1;
    printf("Enter a number to find the factorial :\n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("Factorial is : 1");
    }
    else if (n > 1)
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("The factorial of %d is : %d", n, fact);
    }
    else
    {
        printf("Enter a valid number i.e. > 0");
    }
}
