#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *label="apple",*cptr=label;
	int length;
	while(*cptr!='\0')
	cptr++;
	printf("length is %d",(cptr-label));
	char *name="suryanaryana";
	char *arr=name;
	while(*name!='\0')name++;
	printf("\nthe length of the string is %d",(name-arr));
	
	return 0;
}
