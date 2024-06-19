#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void display(int *arr,int n);
void insert(int *arr);
void reverse(int *arr);
void sort(int *arr,int n,int ch);
void swap(int i,int j,int *arr);
int n;
int main(int argc, char *argv[]) {

	printf("enter the elements present in an array ");
	scanf("%d",&n);
	int ch,i,arr[n+1];
	printf("enter the elements in an array ");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	do {
		printf("\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("*                ENTER YOUR CHOICE                      *\n");
		printf("*            1. TO display the array                    *\n");
		printf("*            2. To insert an element in given position  *\n");
		printf("*            3. To delete an element of given position  *\n");
		printf("*            4. To sort an elements in ascending order  *\n");
		printf("*            5. To sort an elements in descending order *\n");
		printf("*            6. To reverse the array                    *\n");
		printf("*            7. To search the position of array         *\n");
		printf("*            8. To exit the array                       *\n");
		printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("ENTER CHOICE ");
		scanf("%d",&ch);
		switch(ch) {
			case 1:system("cls");
				display(arr,n);
				break;
			case 2:system("cls");
				insert(arr);
				break;
			case 3:system("cls");
				deleted(arr);
				break;
			case 7:system("cls");
				printf("The element is found in loc %d",search(arr,n));
				break;
			case 6:system("cls");
				reverse(arr);
				break;
			case 4:case 5:system("cls");
				sort(arr,n,ch);
				break;
			case 8:exit(0);
			default:system("cls");printf("\nINVALID CHOICE");
		}

	} while(ch!=8);

	return 0;
}
void display(int *arr,int n) {
	int i;
label:
	printf("THE ARRAY ELEMENTS ARE :\n");
	for(i=0; i<n; i++)
		printf("%d ",*(arr+i));
}
void insert(int *arr) {
	int i,pos,value;
	printf("Enter the position to be insert an element ");
	scanf("%d",&pos);
	printf("Enter the value to be inserted ");
	scanf("%d",&value);
	for(i=n; i>pos; i--)
		*(arr+i)=*(arr+i-1);
	*(arr+pos)=value;
	n=n+1;
}
void deleted(int *arr) {
	int i,pos;
	printf("Enter the position to be deleted an element ");
	scanf("%d",&pos);
	for(i=pos; i<n; i++)
		*(arr+i)=*(arr+i+1);
	n=n-1;
	display(arr,n);
}
void reverse(int *arr) {
	int i;
	for(i=0; i<n/2; i++) {
		int temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-1-i]=temp;
	}
	display(arr,n);
}
void search(int *arr,int n) {
	int i=0,tar;
	printf("Enter the element to find  ");
	scanf("%d",&tar);
	for(i=0; i<n; i++) {
		if(tar==*(arr+i))
			return i;
	}
	return -1;
}
void sort(int *arr,int n,int ch)
{
	int i,j;
	printf("After sorting ");
	for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	  if(*(arr+i)>*(arr+j))
	    {
	int temp=*(arr+i);
	*(arr+i)=*(arr+j);
	*(arr+j)=temp;
        }
	    if(ch==6)
	    reverse(arr);
	display(arr,n);
}


