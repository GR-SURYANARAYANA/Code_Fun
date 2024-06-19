#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,a;
	printf("Enter the no of elements in an array ");
	scanf("%d",&n);
	int i,j,arr[100];
	printf("enter the element of an array ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the position of element ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		arr[n]=arr[0];
		for(j=0;j<n;j++)
		{
			arr[j]=arr[j+1];
		}
	}
	printf("the result of array is ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
