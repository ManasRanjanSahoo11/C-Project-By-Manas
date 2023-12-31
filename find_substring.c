#include <stdio.h>
#include <string.h>

void main()
{
    char str1[30], str2[30];
    int i, j;
    printf("enter a string :");
    gets(str1);
    printf("enter substring of given string otherwise output may wrong :");
    gets(str2);

    int l1 = strlen(str1);
    int l2 = strlen(str2);

    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < l2; j++)
        {
            if (str1[i+j] != str2[j])
                break;
        }
        if (j == l2){
            printf("substring is found at index = %d", i);
            return;
        }
    }
    printf("Substring is not found!");
}