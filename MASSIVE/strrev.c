#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char arr[]="hello world!";
char recursion(char *arr,int n);
int main(int argc, char *argv[]) {
	
	recursion(arr,strlen(arr));
	return 0;
}
char recursion(char arr[6],int n)
{
	if(n==-1)
	return '/0';
	else
	{
	char c=recursion(arr,n-1);
		printf("%c",c);
	return c;
    }
}
