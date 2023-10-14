#include <stdio.h>
#include <stdlib.h>
void main()
{
    char name[30]; // name variable is used to stored user name.
    int pass;  // pass variable used to stored password.
    int c; // c variable used in enter a choose form user.

    FILE *fp;
    char ch;  // ch is variable is used to print character.
    char filename[10];  // this is the file name.
    char data[500]; //  User Write 500 character to Diery in One Day.

    printf("Enter User Name :\n");
    scanf("%s", &name);
    printf("\n");
    printf("Enter your 6 Digit Password :\n");
    scanf("%d",&pass);

    if(pass==123456)
    {

    printf("\n");
    printf("What do You Want :\n");
    printf("[1] Read \n");
    printf("[2] Write \n");
    printf("[3] Exit ");
    printf("\n");
    printf("Enter Your Choose :");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("[1] - hello.txt\n");
        printf("[2] - creative.txt\n");
        printf("[3] - myfile.txt\n");
        printf("[4] - greet.txt\n");
        printf("[5] - foo.txt\n");

        int m;
        printf("Enter The No. Of A File You Want To Read :");
        scanf("%d", &m);

        if (m == 1)
        {
            FILE *fp = fopen("hello.txt", "r");
            char ch;

            if (fp == NULL)
            {
                printf("File can't Be Opened");
            }
            while ((ch = getc(fp)) != EOF)
            {
                printf("%c", ch);
            }
            fclose(fp);
            exit(0);
        }
        else if (m == 2)
        {
            FILE *fp = fopen("creative.txt", "r");
            char ch;

            if (fp == NULL)
            {
                printf("File can't Be Opened");
            }
            while ((ch = getc(fp)) != EOF)
            {
                printf("%c", ch);
            }
            fclose(fp);
            exit(0);
        }
        else if (m == 3)
        {
            FILE *fp = fopen("myfile.txt", "r");
            char ch;

            if (fp == NULL)
            {
                printf("File can't Be Opened");
            }
            while ((ch = getc(fp)) != EOF)
            {
                printf("%c", ch);
            }
            fclose(fp);
            exit(0);
        }
        else if (m == 4)
        {
            FILE *fp = fopen("greet.txt", "r");
            char ch;

            if (fp == NULL)
            {
                printf("File can't Be Opened");
            }
            while ((ch = getc(fp)) != EOF)
            {
                printf("%c", ch);
            }
            fclose(fp);
            exit(0);
        }
        else if (m == 5)
        {
            FILE *fp = fopen("foo.txt", "r");
            char ch;

            if (fp == NULL)
            {
                printf("File can't Be Opened");
            }
            while ((ch = getc(fp)) != EOF)
            {
                printf("%c", ch);
            }
            fclose(fp);
            exit(0);
        }
        else
        {
            printf(" You Have Entered No. That Has Not Exits.\n\n Please Enter Valid No. :");
            exit(0);
        }

    case 2:

        printf("Enter File Name :");
        scanf("%s", filename);
        fp = fopen(filename, "w");
       
        if (fp==NULL)
        {
            printf("Unable To Create A File..!");
            exit(0);
        }
        printf("Press... Enter to Continue And Saved Sucessfully..!! \n\n");
        printf("Enter The Content :\n\n");
        scanf("%c",&data);

        fgets(data,500,stdin);

        fputs(data,fp);

        fclose(fp);
        
        exit(0);

        break;

    case 3:
        exit(0);
        break;

    default:
        printf("\n Invalid choose ...!\n Plese Select Valid Number ");
        break;
    }

    }
    else
    {
        printf("Your Password is Incorrect..!!");
    }
}