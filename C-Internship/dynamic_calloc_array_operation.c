#include <stdio.h>
#include <stdlib.h>
void insert(int *arr);
void display(int *arr);
void sort(int *arr);
void search(int *arr);
void des_sort(int *arr);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int *arr=0,size;
int main(int argc, char *argv[]) {
	int choice,i;
	printf("Enter the number of elements at intial stage ");
	scanf("%d",&size);
	arr=(int *)calloc(size,sizeof(int));
	for(i=0;i<size;i++)
	   scanf("%d",&arr[i]);
	do{
//		sizeof(*arr);
	printf("\nEnter the choice \n");
	printf("1.INSERT NEW ELEMENT ");
	printf("\n2.DISPLAY THE NEW ARRAY ");
	printf("\n3.SORT THE GIVEN ARRAY ");
	printf("\n4.SORT BY DESCENDING  ");
	printf("\n5.SEARCH THE ARRAY ELEMENT ");
	printf("\n6.EXIT");
	printf("\n\nCHOICE :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:system("cls");
		printf("1.INSERT NEW ELEMENT \n");
		insert(arr);printf("\n");break;
		case 2:printf("THE ARRAY IS ");
		display(arr);break;
		case 3:sort(arr);break;
		case 4:des_sort(arr);break;
		case 5:search(arr);break;
		case 6:exit(0);
	}
}while(choice!=6);
	return 0;
}
void insert(int *arr)
{
	size=size+1;
	arr=realloc(arr,size*sizeof(int));
	printf("\n\n1.ENTER THE NEW ELEMENT DO YOU INSERT ");
	scanf("%d",&arr[size-1]);
	display(arr);
	printf("\nSIZE OF---->%d",sizeof(*arr));
}
void display(int *arr)
{
	int i;
	for(i=0;i<size;i++)
	printf(" %d",arr[i]);
//	free(arr);
}
void sort(int *arr)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		if(*(arr+i)>*(arr+j))
		{
			int temp=*(arr+i);
			*(arr+i)=*(arr+j);
			*(arr+j)=temp;
		}
	}
	display(arr);
	printf("\nSIZE OF---->%d\n",sizeof(*arr));
}
void search(int *arr)
{
	int tar,i;
	printf("enter the target ");
	scanf("%d",&tar);
	for(i=0;i<size;i++)
	if(tar==*(arr+i))
	   break;
	printf("\nThe element is found in location %d",i);
}
void des_sort(int *arr)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		if(*(arr+i)<*(arr+j))
		{
			int temp=*(arr+i);
			*(arr+i)=*(arr+j);
			*(arr+j)=temp;
		}
	}
	display(arr);
	printf("\nSIZE OF---->%d\n",sizeof(*arr));
}

