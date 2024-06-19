#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[100],s2[100];
	printf("enter the string 1 ");
	scanf("%[^\n]",&s1);
	printf("enter the string 2 ");
	scanf("%[^\n]",&s2);
	printf("%s %s",s1,s2);
	return 0;
}
