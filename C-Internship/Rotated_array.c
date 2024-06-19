#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,arr[100],pos,n;
	printf("enter the number of elements ");
	scanf("%d",&n);
	printf("enter the number of time array should rotate ");
	scanf("%d",&pos);
	printf("enter the elements one by one ");
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	 if(pos>n)
	 {
	 	int div=pos/n;
	 	pos=pos-n*div;
	 }
	for(i=0;i<pos;i++)
	{
		int start=pos-i-1;
		int end=n-pos+i;
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
	}
	printf("After rotating the array is %d",pos);
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);

	return 0;
}
