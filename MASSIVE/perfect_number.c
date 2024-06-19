#include <stdio.h>
#include <stdlib.h>
int fact_sum(int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Enter the number ");
	scanf("%d",&n);
	//now sum the factor using another function
	fact_sum(n);
	return 0;
}
int fact_sum(int n)
{
	int sum=0,i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if(sum==n)
	printf("its a perfect numeber ");
	else
	printf("its not a perfect number ");
	return 0;
}
