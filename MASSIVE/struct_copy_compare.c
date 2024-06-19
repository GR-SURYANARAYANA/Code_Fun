#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct class{
	int number;
	char name[20];
	float marks;
};
int main(int argc, char *argv[]) {
 struct class std1={111,"RAO",72.50};
struct class std2={222,"ARUN",80.53};
struct class	std3=std2;
	if(std3.number==std2.number && std3.marks==std2.marks)
	printf("The student 2 and student 3 are of same structure ");
	else
	printf("The student of structure 2 is not equals to 3");
	return 0;
}
