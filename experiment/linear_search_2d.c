#include<stdio.h>
int main()
{
    int r,c;
    printf("enter number  of rows and columns ");
    scanf("%d%d",&r,&c);
    int arr[r][c],i,j,tar,locc=-1,locr=-1;
    printf("enter the elements ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
          scanf("%d",&arr[i][j]);
          printf("\n");
    }
    printf("enter the target ");
    scanf("%d",&tar);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]==tar)
            {
                locr=i;
                locc=j;
            }
        }
    }
    if(locr>=0 && locc>=0)
    printf("the element is found in matrix in pos %dx%d",locr+1,locc+1);
    else
    printf("element doesnt found");
    return 0;
}