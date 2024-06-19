
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Enter the number of element ");
	scanf("%d",&n);
	int j,i,arr[n];
	printf("Enter the value one by one ");
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
	{
		for(j=i+1;j>0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
			else
			 break;
		}
    } 	
    for(i=0;i<n;i++)
	 printf("%d ",arr[i]);
 	return 0;
}
