#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p,*table;
	int size;
	printf("enter the numebr of size of table do you required ");
	scanf("%d",&size);
	printf("\n");
	/**** dynamic memory allocation   ****/
	if((table=((int *)malloc(size*sizeof(int))))==NULL)
	{
		printf("NO space is available......!");
		exit(0);
	}
	{
		printf("space is available and adress is %u\n",table);
	     printf("enter the table ");	
		for(p=table;p<table+size;p++)
		scanf("%d",p);
		for(p=table;p<table+size;p++)
		printf("\n%d",*p);
	}
	return 0;
}
