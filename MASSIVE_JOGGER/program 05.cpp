//program using arthamethic opareter
#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2;
	int add, sub,mul;
	float div;
	printf("enter the value of n1 and n2");
	scanf("%d%d",&n1,&n2);
	add=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=n1/(float) n2;
	printf("\nthe value of addition is %d\n",add);
	printf("\nthe value of subtraction is %d\n",sub);
	printf("\nthe value of multiplication is %d\n",mul);
	printf("\nthe value of division is %d\n",div);
		return 0;
}
