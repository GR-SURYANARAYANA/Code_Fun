#include<stdio.h>
#include<math.h>
#define pi 3.1478
int main()
{
    char condition[2];
    float radius,area;
    do
    {
      printf("enter the radius ");
      scanf("%f",&radius);
      printf("\nArea=%.3f",pi*radius*radius);
      printf("\ntype y to perform calculation ");
      scanf("%c",condition);
    }while(condition=="no");
    printf("Nice here to perform the calculation\nGood bye");
    return 0;
}