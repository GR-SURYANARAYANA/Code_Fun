#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int peak_mountain(int n,int *arr);
void cycle_sort(int stop,int *arr);
int main(int argc, char *argv[]) {
    int i=0,temp,correct_index,arr[100],n;
    printf("enter the number of elements ");
    scanf("%d",&n);
    printf("enter the element one by one ");
    for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
    while(i!=n)
    {
    	correct_index=arr[i]-1;
    	if(correct_index==arr[i])
    	{
    		i++;
    		break;
		}
    	else
		{
		 	temp=arr[i];
		 	arr[i]=arr[correct_index];
		 	arr[correct_index]=temp;
		} 
    	
	}
	printf("After sorting the array is ");
	for(i=0;i<n;i++)
     printf("%d ",arr[i]);
	return 0;
}


