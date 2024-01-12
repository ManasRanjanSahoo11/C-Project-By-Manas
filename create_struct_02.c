#include<stdio.h>

struct person {
    char name[30];
    int age;
};

int main() {
    struct person p[50];
    int n;

    printf("Enter how many details you want to insert: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter the details for [%d] person:\n", i + 1);
        
        printf("[%d] person name: ", i + 1);
        scanf("%s", p[i].name);
        printf("[%d] person age: ", i + 1);
        scanf("%d", &p[i].age);
    }

    for(int i = 0; i < n; i++) {
        printf("[%d] person name: %s\n", i + 1, p[i].name);
        printf("[%d] person age: %d\n", i + 1, p[i].age);
    }

    return 0;
}
