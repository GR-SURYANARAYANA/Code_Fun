#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct marks
{
	int ph,c,m;
}*p,*q;
int main(int argc, char *argv[]) {
   int i,size;
//   system("color 9F");
   printf("enter the size of the elements ");
   scanf("%d",&size);
   p=(struct marks *)malloc(size*sizeof(struct marks));
   printf("the adrress of the pointer is %d\n",p);
   p->c=20;
   p->m=90;
   p->ph=30;
   printf("\nthe value of %d %d %d are stored in the adress of %d  %d %d\n",q->c,p->m,p->ph,&p->c,&p->m,&p->ph);
	return 0;
}
