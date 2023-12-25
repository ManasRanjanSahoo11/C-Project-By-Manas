#include<stdio.h>
#include<string.h>

int main() {
    char s1[20], s2[20], s3[40];
    
    printf("Enter the first string: ");
    gets(s1);

    printf("Enter the second string: ");
    gets(s2);
    
    int i = 0, j = 0;
    while (s1[i] != '\0') {
        s3[i] = s1[i];
        j++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0') {
        s3[j + i] = s2[i];
        i++;
    }

    s3[j + i] = '\0';
    
    printf("Concatenated string: %s\n", s3);

    return 0;
}
