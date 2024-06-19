#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1;
    char ch[50],name[50];
    f1=fopen("student.txt","w");
    if(f1=='\0')
    {
        printf("the file doesnt exits ");
        exit(0);
    }
    else 
    printf("file is found ");
    printf("\nenter the caharacter ");
    gets(ch);
    fprintf(f1,"%s",ch);
    printf("file is closed ");
    fclose(f1);
    f1=fopen("student.txt","a");
    if(f1=='\0')
    {
        printf("the file doesnt exits ");
        exit(0);
    }
    else 
    printf("\nfile exits ");
    fscanf(f1,"%s ",&name);
    printf("\n\n%s",name);
 fclose(f1);
    
}