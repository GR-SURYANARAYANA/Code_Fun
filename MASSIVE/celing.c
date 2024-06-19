#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int celing(int,int,int *arr);
int main(int argc, char *argv[]) {
    int n,target,result;
    printf("enter the number of elements ");
    scanf("%d",&n);
    int i,arr[n];
    printf("enter the number one by one");
    
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the target ");
    scanf("%d",&target);
    result=celing(n,target,arr);
     printf("the celing value is %d",arr[result]);
	return 0;
}
int celing(int end,int target,int *arr)
{
	int start=0;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(target==arr[mid])
		 return mid;
		if(target>arr[mid])
		 start=mid+1;
		else
		 end=mid-1;
	}
	return start;
}
