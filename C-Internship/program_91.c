#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *ptr,sum,i=0;
	int arr[5]={10,20,30,40,50};
	ptr=&arr;
	while(i!=5)
	{
		sum+=*ptr;
		i++,ptr++;
	}
	printf("sum=%d",sum);
	return 0;
}
