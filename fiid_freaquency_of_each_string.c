#include <stdio.h>
#include <string.h>

int main()
{
    char s[30];
    printf("Enter the string :"); // hello
    gets(s);
    int len, count, i, j, flag = 0;
    len = strlen(s);
    printf("%d\n", len);
    for (i = 0; i < len; i++)
    {
        count = 0;
        j = 0;
        while (s[j] != '\0')
        {
            if (s[j] == s[i])
            {
                count++;
            }
            j++;
        }
        printf("Frequency of %c : %d\n", s[i], count);
    }
    return 0;
}