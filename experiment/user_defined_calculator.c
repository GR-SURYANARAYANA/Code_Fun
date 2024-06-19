#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,result;
    char ch,s1[4],s2[4]="yes";
    do{
    printf("write the expession in  the form a operator b\n");
    scanf("%d%c%d",&a,&ch,&b);
    switch(ch)
    {
        case '+':printf("=%d",a+b);break;
        case '-':printf("=%d",a-b);break;
        case '*':printf("=%d",a*b);break;
        case '/':printf("=%d",a/b);break;
        default: printf("invalid operation or operation might not be available");
    }
    printf("\npress yes to perform else press no ");
    gets(s1);
    result=strcmp(s1,s2);
    }while(result==0);
    return 0;
}