#include <stdio.h>
#include <stdlib.h>
int fact_sum(int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,result;
	printf("Enter the last range of the number ");
	scanf("%d",&n);
	//now sum the factor using another function to check the number 
	for(i=1;i<=n;i++)
	{
		result=fact_sum(i);
		if(result==1)
		 printf("%d ",i);
	}
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
	     return 1;
	return 0;
}
