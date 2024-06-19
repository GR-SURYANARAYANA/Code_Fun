#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p,*q,*r,*s;
	int size;
	printf("enter the size of the array required  ");
    scanf("%d",&size);
	p=(int *)malloc(size*sizeof(int));
	r=(int *)malloc(size*sizeof(int));
    for(q=p;q<p+size;q++)
    scanf("%d",q);
    for(s=r;s<size+r;s++)
    scanf("%d",s);
    printf("\n");
    for(q=p,s=r;q<p+size,s<size+r;q++,s++)
    {
    	printf("%d---%d %d---%d = %d\n",*q,q,*s,s,*q+*s);
	}

	return 0;
}
