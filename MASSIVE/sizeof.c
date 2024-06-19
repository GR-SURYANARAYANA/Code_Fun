#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#pragma
union uj{
	char name[32];
	float salary;
	int work_done;
}a;
struct sj{
	char name[32];
	float salary;
	int work_done
}b;
int main(int argc, char *argv[]) {
	printf("Size of union   %d\nSize of structure %d",sizeof(a),sizeof(b));
	return 0;
}
