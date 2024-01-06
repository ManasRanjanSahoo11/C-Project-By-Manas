#include <stdio.h>
void printNaturalBackward(int n)
{
    if (n == 0)
        return ;
    printf("%d ", n);
    printNaturalBackward(n - 1);
    return;
}
void printNaturalForward(int n)
{
    if (n == 0)
        return ;
    printNaturalForward(n - 1);
    printf("%d ", n);
    return;
}
void main()
{
    int n, ch;
    printf("enter the number :");
    scanf("%d", &n);
    printf("Enter your choice, In which direction you want print:\n1.Backword\n2.Forward\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printNaturalBackward(n);
        break;
    case 2:
        printNaturalForward(n);
        break;
    
    default:
        printf("Enter a valid choice");
        break;
    }
}