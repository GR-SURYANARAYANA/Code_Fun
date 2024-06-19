//binary search
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,low=0,mid,tar,loc=-1;
    printf("enter the number of elements ");
    scanf("%d",&n);
    int arr[n],high=n-1;
    printf("enter the elements ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the elements to be searched ");
    scanf("%d",&tar);
    while(mid=(high+low)/2)
    {
        if(arr[mid]==tar)
        {
            loc=mid;
            printf("the element is in pos %d",loc);
            exit(0);
        }
        else if(arr[mid]>tar)
            high=mid-1;
        else
           low=mid+1;    
    }
    if(loc==-1)
    printf("element doesnt exit ");
    return 0;
}