#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char string[1000];
	int i;
	printf("enter the string ");
	gets(string);
	printf("THE ASCII OF THE STRING IS \n");
	for(i=0;string[i]!='\0';i++)
	  printf("%c=%d\n",string[i],string[i]);
	return 0;
}
