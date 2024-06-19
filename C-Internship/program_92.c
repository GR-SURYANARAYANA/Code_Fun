#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *arr[5]={"surya","chandra","akasha","bhoomi","pritvi"};
	int i;
	for(i=0;i<5;i++)
	printf("\n%s",*(arr+i));
	return 0;
}
