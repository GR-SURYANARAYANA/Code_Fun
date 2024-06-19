#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
binary_search(int,int,int *arr);
int main(int argc, char *argv[]) {
	int n;
	printf("enter the number of element ");
	scanf("%d",&n);
	int i,result,target,arr[n];
	printf("enter the element one by one ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the targeted element ");
	scanf("%d",&target);
	result=binary_search(n,target,arr);
	if(result>=0)
	  printf("the element is found in the position %d",result);
	else
	 printf("the element is not found");
	return 0;
}
int binary_search(int n,int target,int *arr)
{
	int start=0,end=n,mid;
	while(start<=end)
	{
		mid=(start+mid)/2;
		if(*(arr+mid)==target)
		 return mid;
		if(*(arr+mid)>target)
		  end=start-1;
		else
	 	 start=start+1;
	}
	return 0;
}
