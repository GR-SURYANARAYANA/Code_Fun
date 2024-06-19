#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int arrays();
int main(int argc, char *argv[]) {
	int i;
	int *ptr=arrays();
	for(i=0;i<5;i++)
	printf("%d ",*(ptr+i));
	return 0;
}
int arrays()
{
	int arrays[5]={6,5,4,3,1},*ptr=&arrays;
	printf("address of the last array is %d \n",(ptr+4));
	return arrays;
}

