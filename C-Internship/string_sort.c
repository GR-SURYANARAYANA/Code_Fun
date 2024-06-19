#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[10][100],temp[100];
	int i=0,j,n;
	printf("enter the number of the people do you want to sort ");
	scanf("%d",&n);
	printf("Enter the strings :\n");
	for(i=0;i<n;i++)
    {
    		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		    if((strcmp(str[i],str[j]))>0)
		    {
		    	strcpy(temp,str[i]);
		    	strcpy(str[i],str[j]);
		    	strcpy(str[j],temp);
			}
		}
		
	}
	printf("the string is as follows ");
	for(i=0;i<n;i++)
	{
		printf("\n%s",str[i]);
	}
	
	return 0;
}
