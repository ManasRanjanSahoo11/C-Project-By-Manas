#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter a string :");
    gets(str);
    int i=0,word=1;
    while(str[i] !='\0'){
        if(str[i] == ' ')
        word++;
        i++;
    }
    printf("No. of character :%d\n",i);
    printf("No. of words :%d",word);
    return 0;
}