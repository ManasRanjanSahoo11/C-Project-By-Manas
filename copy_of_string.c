#include<stdio.h>
int main(){
    char str1[20], str2[20];
    printf("Enter a string :");
    gets(str1);
    int i=0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    printf("Copied array : %s",str2);
    
    return 0;
}