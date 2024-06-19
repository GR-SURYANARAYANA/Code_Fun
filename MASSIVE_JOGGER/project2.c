#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("THE RANGE OF THE INTEGER IS %d to %d\n",INT_MIN,INT_MAX);
	printf("THE RANGE OF THE FLOAT IS %f to %e\n",FLT_MIN,FLT_MAX);
	printf("THE RANGE OF THE DOUBLE IS %e to %e\n",DBL_MIN,DBL_MAX);
	printf("THE RANGE OF THE CHARACTER IS %d to %d\n",CHAR_MIN,CHAR_MAX);
	return 0;
}
