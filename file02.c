#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *p;
    p = fopen("hello.txt", "w");
    if (p == NULL)
    {
        printf("Error");
        exit(0);
    }
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);

    while (ch != '#')
    {
        fputc(ch, p);
        printf("Do you want to contonue ? \nif yes, press #");
        scanf("%c", ch);
    }

    fclose(p);
    
    p = fopen("hello.txt", "r");
    if (p == NULL)
    {
        printf("Error");
        exit(0);
    }

    char a;
    while((a=fgetc(p)) != EOF){
        printf("%c ",a);
    }

    fclose(p);
}