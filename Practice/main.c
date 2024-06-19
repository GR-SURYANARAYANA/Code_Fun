#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//this shows allocation of the program
	printf("hello world!\n");
	printf("the value of the integer is %d\n",sizeof(int));
	printf("the value allocated to float is %d\n",sizeof(float));
	printf("the value allocated to double is %d\n",sizeof(double));
	printf("the value of character is %d\n",sizeof(char));
	printf("the value of the short is %d\n",sizeof(short));
	printf("the value of the long is %d\n",sizeof(long));
    project2();

	return 0;
}
