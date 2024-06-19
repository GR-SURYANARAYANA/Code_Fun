//Write a program to input principal, time, and rate (P, T, R) from the user and find Simple Interest.
#include<stdio.h>
int main()
{
    int t;
    float p,r,si;
    printf("enter the principle rate and time ");
    scanf("%f%f%d",&p,&r,&t);
    si=p*r*t/100;
    printf("\nsi=%.2f",si);
}