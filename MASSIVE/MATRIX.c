#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct array{
	int arr[10][10];
}a[2];
void input(int n,int no);
void display(int n,int no);
int main(int argc, char *argv[]) {
	struct array a[3]={0};
	int n,i;
    printf("Enter the square matrix of an array ");
	scanf("%d",&n);      
   for(i=0;i<2;i++)
      input(n,i);
      printf("MATRIX 1        MATRIX 2       SUM\n");
      display(n,i);
      
	return 0;
}
void input(int n,int no)
{
	int i,j;
		printf("Input the elements of Matrix %d\n",no);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		 {
		 	scanf("%d",&a[no].arr[i][j]);
		 	a[3].arr[i][j]+=a[no].arr[i][j];
		 	a[4].arr[i][j]-=a[no].arr[i][j];
		 }
		 
	}
}
void display(int n,int no)
{
	int i,j,k;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		 {
		 	printf("%d ",a[0].arr[i][j]);
		 }
		 printf("   ");
		for(j=0;j<n;j++)
		 {
		 	printf("%d ",a[1].arr[i][j]);
		 }
		 printf("   ");
		 for(j=0;j<n;j++)
		 {
		 	printf("%d ",a[3].arr[i][j]);
		 }
		 printf("\n");
	}
}
