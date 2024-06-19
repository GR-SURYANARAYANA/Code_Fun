#include <stdio.h>
#include <stdlib.h>
//void sort(int *arr[100],int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct array{
	int arr[100],l;
}a[4];
int main(int argc, char *argv[]) {
	int i,j,k;
	printf("enter the number of elements first array ");
	scanf("%d",&a[1].l);
	printf("enter the number of elements in second array ");
	scanf("%d",&a[2].l);
	//capture the first array
	printf("enter the elements of first array ");
    for(i=0;i<a[1].l;i++){
    	scanf("%d",&a[1].arr[i]);
    	a[3].arr[i]=a[1].arr[i];
	}
	a[3].l=a[1].l+a[2].l;
    printf("enter the elements of second array ");
    for(i=0,j=a[1].l;i<a[2].l,j<a[3].l;i++,j++){
    	scanf("%d",&a[2].arr[i]);
    	a[3].arr[j]=a[2].arr[i];
	}
	printf("The merged array is as follows ");
	for(i=0;i<a[3].l;i++)
	 printf("%d ",a[3].arr[i]);
    //array sorting
    for(i=0;i<a[3].l;i++)
    {
    	for(j=i+1;j<a[3].l;j++)
    	{
    		if(a[3].arr[i]>a[3].arr[j])
    		{
    			int temp=a[3].arr[i];
    			a[3].arr[i]=a[3].arr[j];
    			a[3].arr[j]=temp;
			}
		}
	}
	printf("\nThe sorted array is ");
	for(i=0;i<a[3].l;i++)
	 printf("%d ",a[3].arr[i]);
	 int l=a[3].l/2;
    if(l%2==0)
    {
	  float median=(a[3].arr[l]+a[3].arr[l+1])/2;
      printf("\nMedian is %.2f",median);
    }
    else
    {
    	float median=(a[3].arr[l+1])/2;
    	printf("\nMedian is %.2f",median);
	}
     
	return 0;
}

