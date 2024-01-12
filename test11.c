#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[50];
    int age;
};

int *foo(struct student *st){
    st->roll=21;
    strcpy(st->name,"hye");
    st->age=20;
    // return st;
}

void main(){
    struct student st1,*p;
    st1.roll=31;
    strcpy(st1.name,"hello");
    st1.age=21;
    p=&st1;
    foo(p);
    printf("Roll no :%d\nName :%s\nAge:%d",st1.roll, st1.name, st1.age);
    return;
}