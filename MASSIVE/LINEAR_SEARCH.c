#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,status=-1;
int main(int argc, char *argv[]) {
	printf("enter the number of elements present in the array ");
	scanf("%d",&n);
	int i,arr[n],target;
	printf("enter the targeted element ");
	scanf("%d",&target);
    printf("enter the elements one by one ");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    	if(target==arr[i])
    	{
    	  status=i;
    	  printf("%d the element is located in the location %d",target,i+1);
	    }
    }
    if(status==-1)
    {
    	printf("elements is not found ");
	}
	
	return 0;
}
