#include <stdio.h>
#include <stdlib.h>
struct Employee{
	char name[30],id[30];
	float salary;
}a[3];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
FILE *ptr;
int main(int argc, char *argv[]) {
	int i,j;
	char file[30];
	
   for(i=0;i<=0;i++)
   {
   	printf("enter the employee detail %d ",i+1);
   	 printf("\nNAME   : ");
   	 scanf("%s",a[i].name);
   	 printf("\nID     : ");
   	 scanf("%s",a[i].id);
   	 printf("\nSALARY : ");
   	 scanf("%f",&a[i].salary);
   }
   printf("enter the name of file-name with .txt ");
//   scanf("%s",file);
//   ptr=fopen(file,"a");
//   fprintf(ptr,"\n---------------------------------------------------------------------\n");
//   fprintf(ptr,"         GROUP OF MASSIVE JOGGERS                  \n");
//   fprintf(ptr,"             Salary Report                         \n");
//   fprintf(ptr,"--------------------------------------------------------------------\n");
//   fprintf(ptr,"SNO        NAME        ID            SALARY   \n");
//   for(i=0;i<3;i++)
//   fprintf(ptr,"%2d        %30s   %12s           %.2f\n",i,a[i].name,a[i].id,a[i].salary);   
//   fclose(ptr); 
    printf("\n---------------------------------------------------------------------\n");
   printf("         GROUP OF MASSIVE JOGGERS                  \n");
   printf("             Salary Report                         \n");
   printf("--------------------------------------------------------------------\n");
   printf("SNO        NAME                ID            SALARY   \n");
   for(i=0;i<=0;i++)
   printf("%2d         %s                 %s           %.2f\n",i,a[i].name,a[i].id,a[i].salary);   
//   fclose(ptr);
	return 0;
}
