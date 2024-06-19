#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i=0,j,n=5,spaces;
	for(i=n;i>0;i--)
	{
		for(spaces=0;spaces<(n-i);spaces++)
		 printf(" ");
		for(j=i;j>0;j--)
		printf("*");
		printf("\n");
	}
	return 0;
}
