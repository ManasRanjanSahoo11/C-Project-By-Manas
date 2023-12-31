#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    printf("Enter a string :");
    gets(str);
    printf("Enter a character :");
    scanf("%c",&ch);
    int i=0,count=0;
    while (str[i] !='\0')
    {
        if(str[i] == ch)
        count++;
        i++;
    }
    printf("Frequency of '%c' is %d.",ch,count);
    
    return 0;
}
