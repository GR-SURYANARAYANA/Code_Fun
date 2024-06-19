#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of triple code statement : ");
    scanf("%d",&n);
    char result[n][10],op[n][10],arg1[n][10],arg2[n][10];
    printf("Enter the Triples statements below : \n");
    for(int i=0;i<n;i++){
        scanf("%s%s%s%s",result[i],arg1[i],op[i],arg2[i]);
    }
    printf("MACHINE CODE GENERATION IS BELOW: \n");
    for(int i=0;i<n;i++){
        printf("\nMOV R0,%s",arg1[i]);
        switch(op[i][0]){
            case '+':printf("\nADD R0,%s",arg2[i]);break;
            case '-':printf("\nSUB R0,%s",arg2[i]);break;
            case '*':printf("\nMUL R0,%s",arg2[i]);break;
            case '/':printf("\nDIV R0,%s",arg2[i]);break;
        }
        printf("\nMOV %s,R0",result[i]);
    }
}