#include <stdio.h>
#include <string.h>
#include<stdbool.h>
void main()
{
    char str[20];
    printf("Enter a string :");
    gets(str);
    int i = 0, j = strlen(str) - 1, flag = true;
    // while (i < j)
    // {
    //     if (str[i] != str[j])
    //     {
    //         flag = 1;
    //         break;
    //     }
    //     i++;
    //     j--;
    // }

    while (i < j)
    {
        if (str[i] == str[j])
        {
            flag = true;
        }

        if (str[i] != str[j])
        {
            flag = false;
            break;
        }

        i++;
        j--;
    }
    if(flag==true)
    printf("Palindrome!");
    else
    printf("Not Palindrome!!");
}