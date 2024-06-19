#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[2][30];
int top[2]={-1,-1};
char peak(int n);

void push(char c,int n){
    stack[n][++top[n]] = c;
}

char pop(int n){
    char c = peak(n);
    stack[n][top[n]--] = '\0'; 
    return c;
}

char peak(int n){
    return stack[n][top[n]];
}

int main(){
    char input[30];
    char production[3][10] = {"A->aBa","B->bB","B->@"};
    printf("Enter the input string terminated with $ : ");
    scanf("%s",input);
    strcpy(stack[0],strrev(input));
    top[0] = strlen(input) - 1;
    push('$',1);
    push('A',1);
    printf("Stack        Input        Action  \n");
    while(1){
        if(peak(1) == 'A'){
            pop(1);
            push('a',1);
            push('B',1);
            push('a',1);
            printf("%5s          %5s           %5s\n",stack[1],stack[0],production[0]);
        }else if(peak(1) == 'B'){
            if(peak(0) == 'b'){
                pop(1);
                push('B',1);
                push('b',1);
                printf("%5s          %5s           %5s\n",stack[1],stack[0],production[1]);
            }else{
                pop(1);
                printf("%5s          %5s           %5s\n",stack[1],stack[0],production[2]);
            }
        }else if (peak(1) == peak(0)){
            if(peak(0) == '$'){
                printf("%5s          %5s          \n",stack[1],stack[0]);
                printf("\nValid String accepted...!");
                exit(0);
            }else{
                printf("%5s          %5s           POP->%c Match %c\n",stack[1],stack[0],pop(0),pop(1));
            }
        }else{
            printf("%5s          %5s  \n",stack[1],stack[0]);
            printf("\nInvalid String Rejected....!");
            exit(0);
        }
    }

}