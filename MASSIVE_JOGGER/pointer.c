#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *ptr;
	int a;
	ptr=fopen("Open.txt","a");
	while((a=getchar())!=EOF)
	{
		putc(a,ptr);
	}
	fclose(ptr);
	ptr=fopen("Open.txt","r");
	printf("\nReading the file from the file ");
	while((a=getc(ptr))!=EOF)
	{
		printf("%c",a);
	}
	fclose(ptr);
	return 0;
}
