#include<stdio.h>

struct student
{
    int roll_no;
    char name[30];
    int age;
};

int main(){
    struct student s1;
    s1.roll_no=19;
    s1.name="manas";
    s1.age=20;
    printf("Roll no : %d\nName :%s\nAge :%d",s1.roll_no,s1.name,s1.age);
}
