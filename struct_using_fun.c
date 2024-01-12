#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[30];
    int age;
};

int greet (struct student);

int main(){
    struct student st;
    st.roll=1001;
    strcpy(st.name,"Manas Ranjan Sahoo");
    st.age=21;
    greet(st);
    return 0;
}

int greet (struct student s){
    printf("Roll no :%d\nName :%s\nAge :%d",s.roll,s.name,s.age);
    return 0;
}
