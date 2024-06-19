#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,rev_no=0,rem,zeros;
	printf("Enter the number that you want to reverse ");
	scanf("%d",&n);
    while(n>0)
    {
       rem=n%10;
       rev_no=rev_no*10+rem;
       n/=10;
	}
   /* zeros-=log10(rev_no);
    printf("\n%d",zeros);
    while(zeros)
    {
    	rev_no=rev_no*10;
    	zeros--;
	}*/
	printf("\nReverse number of given number i.e(%d) is %d ",temp,rev_no);
	return 0;
}
