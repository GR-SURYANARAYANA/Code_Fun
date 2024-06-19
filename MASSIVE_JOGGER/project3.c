#include <stdio.h>
int main(int argc, char *argv[]) {
	int a=20;
	float b=20.5;
	char name[100]="SURYA NARAYANA";
	int sem=3;
	printf(" ---------------------------------------------------");
	printf("\n | MY NAME                   %s        |",name);
	printf("\n | MY CURRENT SEM            %drdsem                |",sem);
	printf("\n | INTEGER VALUE             %d                    |",a);
	printf("\n | FLOATING VALUE            %.1f                  |\n",b);
	printf(" ---------------------------------------------------\n");
	return 0;
}
