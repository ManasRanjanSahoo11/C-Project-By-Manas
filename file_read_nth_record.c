#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    char name[30];
    float age;
};
int main()
{
    int i, n;
    FILE *fp;
    fp = fopen("manas.txt", "w+");
    if (fp == NULL)
    {
        printf("file open in error");
        exit(0);
    }
    printf("Enter the how many records you want to insert: ");
    scanf("%d", &n);
    struct student st[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the id: ");
        scanf("%d", &st[i].id);

        printf("Enter the name: ");
        scanf("%s", st[i].name);

        printf("Enter the age: ");
        scanf("%f", &st[i].age);

        fprintf(fp, "%d %s %f\n", st[i].id, st[i].name, st[i].age);
    }
    fclose(fp);
    fp = fopen("manas.txt", "r+");
    if (fp == NULL)
    {
        printf("Error");
        exit(0);
    }
    // print total record.
    
    // char ch=fscanf(fp, "%d %s %f", &st[i].id, st[i].name, &st[i].age);
    // while (ch != EOF)
    // {
    //     printf("Id: %d\nName: %s\nAge: %f\n", st[i].id, st[i].name, st[i].age);

    // }

    int x;
    printf("Enter the record no :");
    scanf("%d", &x);

    fseek(fp, (n - 1) * sizeof(struct student), 0);

    fscanf(fp, "%d %s %f", &st[i - 1].id, st[i - 1].name, &st[i - 1].age);

    printf("%d %s %f", st[i - 1].id, st[i - 1].name, st[i - 1].age);

    fclose(fp);
    return 0;
}
