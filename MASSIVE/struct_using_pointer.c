#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student_college_detail{
	int college_id;
	char college_name[20];
};
struct Student_detail{
	int id;
	char name[20];
	float percentage;
	struct student_college_detail c;
}a,*ptr;

int main(int argc, char *argv[]) {
  struct Student_detail a={1,"RAJU",90.75,71445,"NITSURATKAL"};
  struct Student_detail *ptr=&a;
  printf("NAME       :%s\n",ptr->name);
  printf("ID         :%d\n",ptr->id);
  printf("PERCENTAGE :%.2f\n",ptr->percentage);
  printf("COLLEGE ID :%d",ptr->c.college_id);	
	return 0;
}
