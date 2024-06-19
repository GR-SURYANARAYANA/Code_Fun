#include <stdio.h>
#include <stdlib.h>
void rectangle(int n);
void right_angle_triangle(int);
void right_angle_triangle_num(int);
void right_angle_triangle_alphabet(int);
void right_angle_triangle_variety(int);
void LEFT_RIGHT_ANGLE_TRIANGLE(int);
void PYRAMID(int);
void reverse_pyramid(int);
void DIAMOND(int);
void rhombus(int);
void hollow_square(int);
void rhombus_right(int n);
void odd_pyramid_pattern(int n);
void reverse_pyramid_num(int n);
void right_angle_triangle_alphabet1(int n);
void PYRAMID_num(int n);
int i,j,spaces;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//the patterns list with their function
int main(int argc, char *argv[]) {
	int n;
	printf("enter the number of rows ");
	scanf("%d",&n);

	//function to call the rectangle program]
	printf("\nTHE PATTERN FOR THE RECTANGLE IS \n");
	rectangle(n);
	//function to call the right angle triangle
	printf("\nTHE PATTER FOR THE RIGHT ANGLE TRIANGLE\n");
	right_angle_triangle(n);
	printf("\n");
	printf("\n THE PATTERN FOR THE LEFT ANGLE TRIANGLE \n");
	LEFT_RIGHT_ANGLE_TRIANGLE(n);
	printf("\n THE PATTERN FOR THE PYRAMID \n");
	PYRAMID(n);
	printf("\nTHE PATTERN FOR THE REVERSE PYRAMID \n");
	reverse_pyramid(n);
	printf("\n THE DIAMOND SHAPE PATTERN \n");
	DIAMOND(n);
	printf("\nTHE PATTEN FOR THE HOLLOW SQUARE \n");
	hollow_square(n);
	printf("\nTHE PATTERN FOR THE HOLLOW RHOMBUS\n");
	rhombus(n);
	printf("\nTHE PATTERN FOR THE RHOMBUS_RIGHT \n");
     rhombus_right(n);
	printf("\nODD PYRAMID PATTERN \n");
     odd_pyramid_pattern(n);
     printf("\nTHE PATTERN FOR THE REVERSE PYRAMID \n");
	reverse_pyramid_num(n);
		printf("\n THE PATTERN FOR THE PYRAMID \n");
	PYRAMID_num(n);
     //printf("differnt pattern try ");
     //different(n);
	return 0;
}
//the rectangle program
void rectangle(int n)
{
	int i,j,c;
	printf("enter the number of columns for rectangle only ");
	scanf("%d",&c);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=c;j++)
		  printf("* ");
		 printf("\n");
	}
}
//program for the right angle triangle pattern
void right_angle_triangle(int n)
{
	for(i=1;i<=n;i++){
	 for(j=1;j<=i;j++)
	  printf("* ");
	  printf("\n");
 }
}
void LEFT_RIGHT_ANGLE_TRIANGLE(int n)
{
	for(i=n;i>=1;i--)
	 {
	 	for(spaces=1;spaces<i;spaces++)
	 	    printf("  ");
	    for(j=n;j>=i;j--)
	       printf("* ");
	       printf("\n");
		 	    	
    }
}
void PYRAMID(int n)
{
	for(i=n;i>=1;i--)
	{
		for(spaces=1;spaces<=i;spaces++)
	 	   printf(" ");
	    for(j=n;j>=i;j--)
	       printf("* ");
	       printf("\n");
	}
}
void reverse_pyramid(int n)
{
	for(i=1;i<=n;i++)
	{
		for(spaces=1;spaces<i;spaces++)
		printf(" ");
		for(j=n;j>=i;j--)
		printf("* ");
		printf("\n");
	}
}
void DIAMOND(int n)
{
  PYRAMID(n-1);
  reverse_pyramid(n);
}
void hollow_square(int n)
{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			printf("* ");
			else
			printf("  ");
			
		}
		printf("\n");
	}
}
void rhombus(int n)
{
    for(i=1;i<=n;i++)
    {
    	for(spaces=1;spaces<=i;spaces++)
    	printf(" ");
    	
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			printf("* ");
			else
			printf("  ");
			
		}
		printf("\n");
	}
	
}
void rhombus_right(int n)
{
	for(i=n;i>=1;i--)
	{
	    for(spaces=i;spaces>=1;spaces--)
    	printf(" ");
    	
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			printf("* ");
			else
			printf("  ");
			
		}
		printf("\n");
	}
}
void odd_pyramid_pattern(int n)
{
	for(i=1;i<=n;i++)
	{
		for(spaces=1;spaces<=n-i;spaces++)
		printf("  ");
		for(j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}
		
		 printf("\n");
	}
}
void differnt(int n)
{
	
}
void PYRAMID_num(int n)
{
	for(i=n;i>=1;i--)
	{
		for(spaces=1;spaces<=i;spaces++)
	 	   printf(" ");
	    for(j=n;j>=i;j--)
	       printf("%d ",i);
	       printf("\n");
	}
}
void reverse_pyramid_num(int n)
{
	for(i=1;i<=n;i++)
	{
		for(spaces=1;spaces<i;spaces++)
		printf(" ");
		for(j=n;j>=i;j--)
		printf("%d ",i);
		printf("\n");
	}
}

void right_angle_triangle_num(int n)
{
	for(i=1;i<=n;i++){
	 for(j=1;j<=i;j++)
	  printf("%d ",i);
	  printf("\n");
 }
}
void right_angle_triangle_num1(int n)
{
	for(i=1;i<=n;i++){
	 for(j=1;j<=i;j++)
	  printf("%d ",j);
	  printf("\n");
 }
}

void right_angle_triangle_alphabet(int n)
{
	for(i=65;i<=65+n;i++){
	 for(j=65;j<=i;j++)
	  printf("%c ",i);
	  printf("\n");
 }
}

void right_angle_triangle_alphabet1(int n)
{
	for(i=65;i<=65+n;i++){
	 for(j=65;j<=i;j++)
	  printf("%c ",j);
	  printf("\n");
 }
}


