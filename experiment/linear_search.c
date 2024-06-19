//linear search 
#include<stdio.h>
int main()
{
    int n,tar,i,loc=-1;
    printf("enter the numbers of element are invloved ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element to search ");
    scanf("%d",&tar);
    printf("enter the elements ");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
       // printf("%d",arr[i]);
        if(arr[i]==tar)
        loc=i;
    }
    if(loc>=0)
      printf("the element is found in %d position ",loc);
    else
      printf("the element doesn't exits");

 return 0;
}