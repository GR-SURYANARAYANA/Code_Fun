#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int arr[50]
int main(int argc, char *argv[]) {
  int *arr,i,size;
//	syntax:
//	int *ptr=(return type *)calloc(size,sizeof(int));
  printf("Enter the size of the array ");
  scanf("%d",&size);
arr=(int *)calloc(size,sizeof(int));
printf("\n The adress of pointer is %u\n",arr);
if(arr==NULL)
printf("No memory space ");
else
{
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d %d\n",arr[i],(arr+i));
	}
	printf("\nafter free the value is %d size is %d",*arr,sizeof(arr));
	free(arr);
	printf("\nthe new adress of the pointer is %d\n",arr);
	printf("after free the value is %d size is %d",*arr,sizeof(arr));
}
	return 0;
}
