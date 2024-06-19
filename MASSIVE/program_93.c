#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int add(int *a,int *b);
int add(int a,int b);
int main(int argc, char *argv[]) {
	int a=5,b=11;
	int *result=add(a,b);
	printf("%d",*result);
	return 0;
}
int add(int a,int b)
{
	int *sum=(a+b);
	return &sum;
}
