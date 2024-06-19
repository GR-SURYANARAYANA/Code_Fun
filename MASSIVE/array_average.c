#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//display the average of the number given using array 
int main(int argc, char *argv[]) {
	int n;
	printf("enter the number of elements ");
	scanf("%d",&n);
	int i,arr[n],sum=0,average;
	printf("enter the elements one by one ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	average=sum/n;
	printf("Average of the all element is %d",average);
	return 0;
}

