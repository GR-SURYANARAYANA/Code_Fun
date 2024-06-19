#include<stdio.h>
struct student
{
    int phy,che,cs,bio;
    float avg;
    char name[50];
    char usn[20];
}f[100];
int main()
{
    float result;
    int i=0,n;
    printf("enter the number of student you want to enter ");
    scanf("%d",&n);
    printf("enter the student name,usn,phy,che,cs,bio\n");
    for(i=0;i<n;i++)
    {
      scanf("%s %s %d %d %d %d",&f[i].name,&f[i].usn,&f[i].phy,&f[i].che,&f[i].cs,&f[i].bio);
    }
    for(i=0;i<n;i++)
    {
        printf("STUDENT NAME :%s\n",f[i].name);
        printf("\nUSN          :%s",f[i].usn);
        printf("\nPHYSICS MARKS:%d",f[i].phy);
        printf("\nCHEMISTRY MARKS :%d",f[i].che);
        printf("\nCOMPUTER SCIENCE MARKS :%d",f[i].cs);
        printf("\nBIOLOGY MARKS:%d",f[i].bio);
        result=(f[i].phy+f[i].che+f[i].bio,f[i].cs)/4;
        printf("\nAVERAGE MARKS:%.2f",result);
        if(result>35)
        printf("\nSCORED ABOVE AVERAGE ");
        else
        printf("\nscored below average");

    }
 return 0;
}