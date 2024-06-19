#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
     
int main(int argc, char *argv[]) {
	int name[50];
	int n,i,j;
	printf("Enter the number of elements one by one ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%d",&name[i]);
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		if(name[i]>name[j])
	 		{
	 			int temp=name[i];
	 			name[i]=name[j];
	 			name[j]=temp;
			}
		}
	 }
	for(i=0;i<n;i++)
	 printf("%c ",name[i]);
	
	return 0;
}
