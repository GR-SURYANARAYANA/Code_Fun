#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[100],s2[100];
	int i=0,j=0;
	printf("enter the string 1");
	gets(s1);
	printf("%s",s1);
	printf("\nenter the string 2");
//	scanf("%[^\n]",s2);
    gets(s2);
	printf("%s",s2);
	while(s1[i]!='\0')i++;
	while(s2[j]!='\0')
	{
		s1[i+j]=s2[j];
		j++;
	}
	printf("\nafter merging the string 1 is %s",s1);
	return 0;
}
