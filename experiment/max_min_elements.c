//maximum and minimum
#include<stdio.h>
int main()
{
    printf("enter the number of elements ");
    int n;
    scanf("%d",&n);
    int arr[n],i;
    printf("enter the elements ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int max=arr[0],min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=max)
          max=arr[i];
        if(arr[i]<=min)
          min=arr[i];
    }
    printf("\nmax:%d\nmin:%d",max,min);
}