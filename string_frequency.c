#include <stdio.h>
#include <stdio.h>

void main()
{
    char s[30], a;
    printf("Enter a string :");
    gets(s);

    printf("Enter a character you want to find frequency :");
    scanf("%c", &a);

    int i = 0, count = 0;
    while (s[i] != '\0')
    {
        if (s[i] == a)
            count++;
        i++;
    }
    printf("Frequency of specified character :%d", count);
}