#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *ptr1;
	char name[50]="name.txt";
	printf("enter the file name  ");
	scanf("%s",name);
	ptr1=fopen(name,"a");
	if(ptr1==NULL)
	printf("file doesnt exit ");
	else
	printf("file exits ");
	fprintf(ptr1,"                                               \n");
	fprintf(ptr1,"BALLARI INSTITUTE OF TECNOLOGY AND MANAGEMENT  \n");
	fprintf(ptr1,"  REPORT BASED ON THE MARKS CARD               \n");
	fprintf(ptr1,"-----------------------------------------------\n");
	fprintf(ptr1," NAME       USN      MARKS      PASS STATUS    \n");
	fprintf(ptr1,"-----------------------------------------------\n");
	
	return 0;
}
