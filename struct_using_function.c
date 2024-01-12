#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[30];
    int age;
};

int greet (int, char[], int);

int main(){
    struct student st;
    st.roll=101;
    strcpy(st.name,"artificial intelligence");
    st.age=3;
    greet(st.roll, st.name, st.age);
    return 0;
}

int greet (int r, char name[], int a){
    printf("Roll no :%d\nName :%s\nAge :%d",r,name,a);
    return 0;
}
