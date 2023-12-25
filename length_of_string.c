#include<stdio.h>
int main(){
    char ch[20];
    printf("Enter a string :");
    gets(ch);
    int i=0,len=0;
    while(ch[i] != '\0'){
        len++;
        i++;
    }
    printf("Length of the string : %d",len);
    return 0;
}