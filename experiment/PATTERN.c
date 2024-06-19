#include<stdio.h>
int main()
{
 int r,c,tar;
 printf("enter the marix rows and coloumns ");
 scanf("%d%d",&r,&c);
 int i,j,arr[r][c];
 printf("enter the elements\n");
 for(i=0;i<r;i++)
 {
    for(j=0;j<c;j++)
    scanf("%d",&arr[i][j]);
 }
 printf("enter the targeted digit ");
 scanf("%d",&tar);
 i=0,j=c-1;
 while(i<r && j<=c)
 {
    if(arr[i][j]==tar)
    {
     printf("%d %d ",i,j);
    }
    if(arr[i][j]>tar)
       j++;
    else
    i++;
 }

}