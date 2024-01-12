#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *ptr;
    char ch;

    ptr = fopen("hello.txt", "w+");

    if (ptr == NULL) {
        printf("Error opening file\n");
        exit(0);
    }

    printf("Enter a character: ");
    scanf(" %c", &ch);

    fputc(ch, ptr);

    rewind(ptr);

    char a = fgetc(ptr);
    printf("%c", a);

    fclose(ptr);
    return 0;
}
