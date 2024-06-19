#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void append();
int main(int argc, char *argv[]) {
	int ch;
	while(1)
	{
		printf(" ""single link list operation"" ");
		printf("\n1.APPEND ");
		printf("\n2.ADD AT BEGINNING ");
		printf("\n3.ADD AFTER A POSITION ");
		printf("\n4.LENGTH OF THE NODE ");
		printf("\n5.DISPLAY ");
		printf("\n6.DELETE THE NODE ");
		printf("\n7.EXIT\n\nCHOICE:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:append();break;
	    	case 7:exit(0);
	    	default:printf("\n\nINVALID CHOICE........!\n\n");
	    	
		}
	}
	return 0;
}
void append()
{
	
}
