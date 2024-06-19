#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int *arr,size;
void create(int *arr);
int main(int argc, char *argv[]) {
	int i;
	printf("enter the size ");
	scanf("%d",&size);
    arr=(int *)calloc(size,sizeof(int));
    for(i=0;i<size;i++)
    {
    	scanf("%d",&arr[i]);
	}
		for(i=0;i<size;i++)
    {
    	printf("%d ",arr[i]);
	}
	printf("\nAllocate new ");
	create(arr);
	for(i=0;i<size;i++)
    {
    	printf("%d ",arr[i]);
	}
	printf("\nsize of the array is %d",sizeof2(arr));
	return 0;
}
void create(int *arr)
{
	size=size+1;
   arr=realloc(arr,size*sizeof(int));
   arr[size-1]=50;
}
