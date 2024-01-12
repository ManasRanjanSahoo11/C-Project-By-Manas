#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[30];
    int age;
};
int main(){
    struct student st, *p;
    p=&st;
    p->roll=19;
    // p->name="manas";
    strcpy(p->name,"manas");
    p->age=20;
    printf("Roll no :%d\nName :%s\nAge :%d\n",p->roll,p->name,p->age);
}