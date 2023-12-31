#include<stdio.h>
int main(){
    char str1[20], str2[20];
    printf("Enter the first string :");
    gets(str1);
    printf("Enter the second string :");
    gets(str2);
    int i=0,flag=1;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            flag=0;
            break;
        }
        i++;
    }
    if(flag == 1)
    printf("Two string are equal!");
    else
    printf("Two string are Not equal!");
    return 0;
}