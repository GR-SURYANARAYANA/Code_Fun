#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("enter the number of elements of array ");
	scanf("%d",&n);
	int i,j,arr[i],target;
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	printf("enter the target ");
	scanf("%d",&target);
	for(i=0;i<n;i++)
		if(arr[i]==target)
		 break;
	for(j=n-1;j<=i;j++)
	  if(arr[i]==target)
	   break;
	if(i==j)
	 printf("The element is found in loc %d",i);
	else
	 printf("The element start from %d and ends at %d",i,j);   
	return 0;
}
