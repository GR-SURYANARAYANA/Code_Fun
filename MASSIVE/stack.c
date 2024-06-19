#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int *arr;int c;
int size=0;
void push(int *arr);
void pop(int *arr);
void display(int *arr);
int main(int argc, char *argv[]) {
	int ch;
  do{
  	system("color 0A");
  printf("\nENTER THE CHOICE ");
  printf("\n1.PUSH ");
  printf("\n2.POP  ");
  printf("\n3.ISEMPTY ");
  printf("\n4.PEAK");
  printf("\n5.DISPLAY");
  printf("\n\nCHOICE: ");
  scanf("%d",&ch);
  switch(ch)
  {
  	case 1:push(arr);break;
  	case 2:pop(arr);break;
  	case 4:exit(0);break;
  	case 5:display(arr);break;
  }
}while(ch!=4);
	return 0;
}
void display(int *arr)
{
	printf("\n");
    int i;
	system("color 8F");
	for(i=0;i<size;i++)
	printf("%d ",*(arr+i));
}
void push(int *arr)
{

	size=size+1;
	arr=(char *)calloc(size,sizeof(char));
	system("color 6E");
	printf("Enter the element ");
	scanf("%d",&c);
    arr[size-1]=c;
    display(arr);
}
void pop(int *arr)
{
	system("color 3D");
	
	arr[size-1]=0;
	arr=(char *)calloc(size,sizeof(char));
	size=size-1;
	display(arr);
}

