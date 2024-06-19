#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int,int *arr);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int i,n;
	printf("enter the number of elements ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element one by one ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	bubble_sort(n,arr);
	printf("after sorting ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
//ascending order
void bubble_sort(int n,int *arr)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n ;j++)
		{
			if(*(arr+i)>*(arr+j))
			{
					int temp=*(arr+i);
	            *(arr+i)=*(arr+j);
	              *(arr+j)=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	 printf("%d",arr[i]);
}
