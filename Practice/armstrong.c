//THIS PROGRAM IS FOR ARMSTRONG NUMBER FOR ALL NUMBER 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int armstrong(int,int);
int check(int,int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,zeros,result;
	printf("enter the number ");
	scanf("%d",&n);
	zeros=log10(n);
	//armstrong number check
	result=armstrong(n,zeros+1);
	if(result==1)
	 printf("%d is an armstrong number",n);
	else
	 printf("%d It's not an armstrong number",n);
	return 0;
}
int armstrong(int n,int zeros)
{
	int sum=0,rem,temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+pow(rem,zeros);
		n/=10;
	}
//	printf("sum=%d",sum);
    return  check(temp,sum);	
}
int check(int temp,int sum)
{
	if(temp==sum)
	return 1;
	return 0;
}
