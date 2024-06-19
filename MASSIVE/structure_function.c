#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student
{
  char name[50];
  int roll;
  float percentage;	
}s;
void display(struct student *ptr);
int main(int argc, char *argv[]) {
 printf("enter the student name ");
 scanf("%s",&s.name);
 printf("enter the student roll no ");
 scanf("%d",&s.roll);
  printf("enter the student percentage ");
 scanf("%f",&s.percentage);
 display(&s);
	return 0;
}
void display(struct student *ptr)
{
	printf("NAME       :%s\n",ptr->name);
    printf("ROLL NO    :%d\n",ptr->roll);
    printf("PERCENTAGE :%.2f\n",ptr->percentage);
}
