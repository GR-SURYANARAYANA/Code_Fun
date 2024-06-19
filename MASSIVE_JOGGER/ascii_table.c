#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//programm to get the ascii table
   int n=0;
   printf("NUMBER   ASCII_VALUE");
   while(n<=256)
   {
   	printf("\n %3d          %c",n,n);
   	n++;
   	
   }   
	return 0;
}
