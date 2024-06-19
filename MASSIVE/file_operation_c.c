#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *ptr;
	int count=0;
	char filename[30],ch;
	printf("Enter the file name(.txt)");
	
//	ptr=fopen(filename,"a");
//	
//	fclose(ptr);
//	ptr=fopen(filename,"r");
//	ch=getc(ptr);
//	while(ch!=EOF)
//	{
//		count++;
//		ch=getc(ptr);
//	}
      ptr=fopen("hello_world.c","w");
      {
      	
      	fprintf(ptr,"#include<stdio.h>\nint main()\n{\n printf(""""hello world"""");return 0;\n}");
        fseek(ptr,(61-31),SEEK_END);
//        fprintf(ptr,"this is over wriited");
	  }
	  fclose(ptr);
	return 0;
}
