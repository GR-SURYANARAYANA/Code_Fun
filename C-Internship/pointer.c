#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,*ptr;
	int **ptr1;
	ptr=&a;
	ptr1=&ptr
	**ptr1=100;
	printf("%d",ptr1);
	
	return 0;
}
