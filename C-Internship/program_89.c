#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0,b=0;
	int *ptr,*ptr1;
	ptr=&a;
	ptr1=&b;
	printf("Enter the value of a and b ");
	scanf("%d%d",&a,&b);
	printf("sum=%d\n",*ptr+*ptr1);
	printf("difference=%d\n",*ptr-*ptr1);
	printf("multiplication=%d\n",*ptr**ptr1);
	printf("division=%d\n",(*ptr)/(*ptr1));
	printf("remainder=%d",*ptr%*ptr1);
	return 0;
}
