#include<stdio.h>
//program to convert the faherite to celsius
int f_to_c()
{

    int f=0,i;
    printf("fahenheit  celsius\n");
    for(i=0;i<=300;i+=20)
    {
        
        printf("  %d          %d\n",i,(5*(i-32)/9));
        //i=i+20-1;

    }
    return 0;
    
}
//program to count newline blankspace and tabs
int count_blankspace()
{
    char name[100];
    int space=0,i=0;
    puts("enter the name ");
    gets(name);
    while(name[i]!='\0')
    {       
        if(name[i]==' ')space++;
        i++;
    }
   printf("\nspaces are %d in numbers in a given sentence",space);
}
/*Write a program to copy its input to its output, replacing each
tab by \t, each backspace by \b, and each backslash by \\. This makes tabs
and backspaces visible in an unambiguous way..*/
int output_design()
{
    char sen[100],j[100];
    int i=0;
    puts("enter the sentence ");
    gets(sen);
    while(sen[i]!='\0')
    {
        printf("%2c\\\t",sen[i]);
        i++;
    }
  return 0;
}
/*Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging.*/
int main()
{
  int 
    
}
