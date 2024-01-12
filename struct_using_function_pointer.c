#include<stdio.h>
#include<string.h>

struct student{
    int roll_no;
    char name[30];
    int age;
};
int *greet(struct student *s){
    s->roll_no=101;
    strcpy(s->name, "hello");
    s->age=25;
    // return s;
}
int main(){
    struct student st, *p;
    st.roll_no=101;
    strcpy(st.name,"artificial intelligence");
    st.age=3;
    // p=greet(&st);
    p=&st;
    greet(p);
    printf("Roll no :%d\nName :%s\nAge :%d",st.roll_no, st.name, st.age);
    return 0;
}