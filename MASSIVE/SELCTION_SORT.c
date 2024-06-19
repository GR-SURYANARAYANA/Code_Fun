#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_max(int,int *arr);
void swap(int,int,int *arr);
int main(int argc, char *argv[]) {
	int n;
	printf("enter the number of elements ");
	scanf("%d",&n);
	int i,arr[n];
	printf("enter the elements one by one ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
    //selection sort 
    for(i=0;i<n;i++)
    {
    	int stop,max;
    	stop=n-i;
    	max=get_max(stop,arr);
    	swap(stop-1,max,arr);
	}
	printf("AFTER SORTING ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
int get_max(int stop,int *arr)
{
	int i,max=0;
	for(i=1;i<stop;i++)
	{
		if(*(arr+max)<*(arr+i))
		 max=i;
		
	}
	return max;
}
void swap(int last,int max,int *arr)
{
	int temp=*(arr+max);
	*(arr+max)=*(arr+last);
	*(arr+last)=temp;
}
