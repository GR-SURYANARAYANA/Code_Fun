#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct{
	char name[30];
	int roll;
}a;
void display(char *n,int *r)
{
	printf("NAME   :%s\n",n);
	printf("ROLL NO:%d",r);
}
int main(int argc, char *argv[]) {
   printf("Enter the name ");
   scanf("%s",a.name);
   printf("enter the roll no");
   scanf("%d",&a.roll);
   display(a.name,a.roll);
	return 0;
}
