#include <stdio.h>
#include <math.h>

int power(int b, int p)
{
    if (p == 0)
        return 1;
    return b * pow(b, p - 1);
}
int main()
{
    int b, p;
    printf("enter the base value :");
    scanf("%d", &b);
    printf("enter the power value :");
    scanf("%d", &p);
    printf("%d ", power(b, p));
    return 0;
}