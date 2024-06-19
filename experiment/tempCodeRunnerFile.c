#include<stdio.h>
int main()
{
    int a,b,c=1;
    while(c==1)
    {
        printf("enter the value of a and b ");
        scanf("%d%d",&a,&b);
        printf("\npress 1 to continue else press any number ");
        scanf("%d ",&c);
    }
}