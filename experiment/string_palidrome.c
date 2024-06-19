//To find out whether the given String is Palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("enter the word ");
    gets(s1);
    strcpy(s2,s1);
    if(strcmp(strrev(s1),s2)==0)
        printf("it is palidrome");
    else
    printf("its is not a palidrome");
    printf("\nthe string 2 is %s ",s2);
    printf("\nthe string 1 is %s ",s1);
}