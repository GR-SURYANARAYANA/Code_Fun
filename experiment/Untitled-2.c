#include<stdio.h>
#include<stdlib.h>

struct student
{
char Name[50];
char USN[10];
int Marks;
};


void main()
{
struct student s[100];
int n, i;
float avg = 0.0,num;

printf("\nEnter the number of students : ");
scanf("%d", &n);
printf("\nEnter the Student details\n");
for(i=0;i<n;i++)
{
printf("\nName : "); 
scanf("%s", s[i].Name);
printf("\nUSN : "); 
scanf("%s", s[i].USN);
printf("\nMarks : "); 
scanf("%d", &s[i].Marks);
avg = avg+s[i].Marks;
}

avg = avg/num;
printf("\nThe average marks for the class is : %g\n", avg);
for(i=0;i<n;i++)
{
printf("\nName\t: %s", s[i].Name);
printf("\nUSN\t: %s", s[i].USN);
printf("\nMarks\t: %d", s[i].Marks);
if(s[i].Marks < avg)
printf("\nThe student has scored below average\n");
else
printf("\nThe student has scored above average\n");
}
}