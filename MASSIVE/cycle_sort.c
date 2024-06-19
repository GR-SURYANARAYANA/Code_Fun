#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void cycle_sort(int,int *arr);
int main(int argc, char *argv[]) {
	int n;
	printf("enter the number of elements ");
	scanf("%d",&n);
	int arr[n],i,j;
	printf("enter the elements one by one ");
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	cycle_sort(n,arr);
	return 0;
}
void cycle_sort(int n,int *arr)
{
	int i=0,j;
	while(i!=n)
	{ 
	 int correct_index=*(arr+i);
		if(correct_index==i)
		{
			i++;
		}
		else
		{
			int temp=*(arr+i);
			*(arr+i)=*(arr+correct_index);
			*(arr+correct_index)=temp;
		}
	}
		for(i=0;i<n;i++)
	       printf("%d ",*(arr+i));
}
