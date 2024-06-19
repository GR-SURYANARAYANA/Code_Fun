#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements you need to sort ");
    scanf("%d",&n);
    int arr[n],temp,i,j;
    printf("enter the array of elements ");
    for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp; 
            }

        }
    }
    printf("\nafter sorting we get ");
    for(i=0;i<n;i++)
    printf(" %d",arr[i]);
    return 0;
}