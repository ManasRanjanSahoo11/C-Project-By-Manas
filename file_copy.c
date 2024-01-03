#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p1, *p2;
    p1 = fopen("manas.txt", "r");
    p2 = fopen("sahil.txt", "w");

    if (p1 == NULL || p2 == NULL)
    {
        printf("Error in opening file!");
        exit(0);
    }
    int ch = getc(p1);
    while ((ch=fgetc(p1)) != EOF)
    {
        fputc(ch, p2);
    }
    printf("File copy suceessful");
    fclose(p1);
    fclose(p2);

    return 0;
}