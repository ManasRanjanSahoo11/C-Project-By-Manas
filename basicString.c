#include<stdio.h>
#include<string.h>
void main(){
    // char ch='a';
    // printf("%p",ch); // '%p' is the format specifier for address.


    // In cahracter array it takes one more block to put '\0' which is indicate end of the string.


    char str[]={'m', 'a', 'n', 'a', 's','\0'}; // Here '\0' can not put autometically by    the compilzer we manully put in the initilizer list. 
    int i=0;
    while(str[i] != '\0'){
    printf("%c",str[i]);
    i++;
    }



    // int x=48;                //As a character the ASCII value of zero i.e 48.( '0' = 48)
    // char ch=(char)x;
    // printf("\n%c",ch);

    //char c={'h', 'e', 'l', 'l', 'o'}; i.e = initilizer list.

    // char ch="hello";   i.e = string literal.
                       // here '\0' put autometically by the compiler which indiacates the end of the string.


    // char g[6] = "hello"; here, size is 6 also including '\0'
    // printf("\n%s",g);



// Way to priting the particular element ->

    // char arr[15]="hello world";
    // int k=0;
    // while(arr[k] != '\0'){
        // printf("%c",arr[k]);

        // printf("%c",k[arr]);

        // printf("%c",*(arr+k)); //here, print string useing pointer.

        // printf("%c",*(k+arr)); 
        // k++;
    // }

    // -> gets() : get string from keyboard.
    // -> puts() : print string on the console string.

    // char s[20];
    // printf("\nEnter the string :");
    // scanf("%[^\n]s", s);
    // printf("You entered string :%s",s);

    // scanf("%[^\n]s", str). Here also read string from keybord unless until ,you press enter . it read also tab, space also while you press the enter key , the compiler autometically put '\0' at the end of the string.


// Q. Reverse of a string ?

    // char str1[20];
    // int size=0;
    // printf("\nEnter the string :");
    // scanf("%[^\n]s", str1);
    // printf("You entered string :%s",str1);

    // i=0;
    // while(str1[i] != '\0'){
    //     size++;
    //     i++;
    // }
    // printf("\nsize of the string :%d",size);

    // printf("\nReverse String is:");
    // i=0;
    // int j=size-1;
    // while(i<j){
    //     char temp=str1[i];
    //     str1[i]=str1[j];
    //     str1[j]=temp;
    //     i++;
    //     j--;
    // }
    // printf("%s",str1);


 // String as pointer ->

    // char z[] = "trident";

    // char *p = z; //p now points z[0].

    // printf("\n%s",p);


    // print an array using pointer??
                                                                 
    // char v[]="hello bhai";
    // char *n =v;             // *n stand for values.     
    // i=0;                    // n stand for address.  
    // while(*n != '\0'){
    //     printf("%c",*n);
    //     n++;
    //     i++;
    // }


    // Note : character pointer can also be used to store address of a string.


    char k[]={'s', 'a', 'l', 'a', 'r'};
    k[0]='l';
    printf(k);
    
    char *str3="hello";
    str3="good morning";
    printf(str3);

    // -> character pointer is read only behaviour.

    // -> In normal initialization, we can modify the individual character but can not modify the overall string.

    // -> In character pointer, we can modify the entire string but can not modify the individual chatacter.


    // printf("\n\n");
    // char s[]="college";       //  s[]=college
    // char *y=s;                //      ^
    // *y='M';                   //      |
    // printf(s);                //      y

   // here, firsly s[] holds the string , then character pointer y points 0th index of the string. then *y = 'M' now y points 'M' instaed of 'c'.


// Copy one string one to another ->
    printf("\n");
    char q[]="Manas is good boy";
    char *p=q;
    q[0]='k'; //now, change in q.
    printf(p);

    // This is also known as Shallow Copy.

    //Note : Not a deep copy : p points to the same character array and hence in q is reflect in p.
    // whenever we do cange in q it also refelct p.
    // here p points q of string literal.

    //this is all about shallow copy.


//Deep copy ->
    // printf("\n");
    // char *s1="it is a pen";
    // char *s2;
    // s2=s1;
    // printf("%s",s1);
    // printf("%s",s2);

// all about deep copy.



//Q.find a size of given string and make deep copy using deep copy ??

    char str5[]="Every ambition need preparation";
    printf("\nOriginal string :%s",str5);
    
    i=0;
    int s=0;
    while (str5[i] != 0)
    {
        s++;
        i++;
    }
    printf("\nsize of the given string is :%d",s);

    char e[s];

    for(i=0;i<s;i++){
        e[i]=str5[i];
    }

    printf("\nCopied String : %s",e);


}