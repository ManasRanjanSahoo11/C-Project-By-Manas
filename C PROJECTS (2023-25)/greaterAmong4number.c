#include <stdio.h>
void main()
{

// GREATER AMONG 4 NUMBER :

    int a = 8, b = 2, c = 3, d = 4;
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
                printf("%d", a);
        }
        else
        {
            printf("%d", d);
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", d);
        }
    }
    else
    {
        if (c > d)
        {
            printf("%d", c);
        }
        else
        {
            printf("%d", d);
        }
    }
   
 
}
