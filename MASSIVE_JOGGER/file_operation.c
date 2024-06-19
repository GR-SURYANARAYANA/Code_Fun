#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
FILE *ptr;
int main(int argc, char *argv[]) {
	char a;
	//open the file
	a=getchar();
	ptr=fopen("open.txt","a");
	//how to start writting the file 
	while((a=getchar())!=EOF)
	{
		putc(a,ptr);
	}
	//how to read the file one by one
	while((a=getch())!=EOF)
	{
		putc(a);
	}
	return 0;
}
