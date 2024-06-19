#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p,*table;
	int size=5;
//	table=(int*)malloc(size * sizeof(int));
//	printf("%d\n",table);
	table=(int *)calloc(size,sizeof(int));
	printf("%d",*(table));
	printf("\nEnter the number ");
	for(p=0;p<size;p++)
	scanf("%d",*(table+p));
	printf("\n\n");
	for(p=table;p<table+size;p++)
	printf(" %d",*(table+p));
	return 0;
}
