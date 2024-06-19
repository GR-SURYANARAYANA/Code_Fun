#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
      
      char n;
     int n1,n2; 
     printf("enter the choice(+,-,*,/,%)\n");
       
      printf("\nenter the value of n1,n2\n");
      scanf("%d%d",&n1,&n2);
       
       //printf("enter the choice(+,-,*,/,%)\n");
      
      switch(n)
      {
      	case '+':
		       printf("%d + %d = %d",n1,n2,n1+n2);
			   break;
		case '-':
			    printf("%d - %d = %d",n1,n2,n1-n2);
			   break;
		case '*':
		        printf("%d * %d = %d",n1,n2,n1*n2);
		       break;
	    case '/':
		        printf("%d / %d = %d",n1,n2,n1/n2);
		       break;
		defult:
			printf("no number");
		}
		return 0;
	}
	

