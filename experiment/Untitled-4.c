#include<stdio.h>
int main()
{
    int q,r;
    printf("enter the no of quantity purchsed ");
    q=1000;
    printf("\nenter the rate of one quantity ");
    r=5;
    float i=q*r;
    if(q>=1000)printf("\namount to be paid is %.2f",(i-0.3*q*r));
    else printf("\namount to be paid is %.2f",i);
    return 0;
   
}