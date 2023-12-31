#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    int i;
    printf("Enter a Lowercase string :");
    gets(str);
    i=0;
    while(str[i] != '\0'){
        str[i]-=32;
        i++;
    }
    printf("Entered string in Uppercase is : %s",str);
    return 0;
}