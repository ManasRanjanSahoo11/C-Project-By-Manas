#include<stdio.h>
int main()
{
    int num,digit,rev=0,num1;
    printf("enter a number");
    scanf("%d",&num);
    num1=num;
    while (num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(rev==num1)
    printf("number is palindrome");
    else
    printf("not palindrome");
    return 0;

    }
