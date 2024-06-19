#include<stdio.h>
#include<stdlib.h>
int check_safe(int a[],int b[],int n);
void display(int a[],int n);
int main(){
    int n,r;
    printf("Enter the number of process : ");
    scanf("%d",&n);
    printf("Enter the number of resources : ");
    scanf("%d",&r);
    printf("Enter the Max allocation part :\n");
    int max[n][r];
    for(int i=0;i<n;i++){
        printf("For process %d : ",i);
        for(int j = 0; j<r; j++){
            scanf("%d",&max[i][j]);
        }
    }
    printf("Enter the Allocation part :\n");
    int alloc[n][r];
    for(int i=0;i<n;i++){
        printf("For process %d : ",i);
        for(int j = 0; j<r; j++){
            scanf("%d",&alloc[i][j]);
        }
    }
    int need[n][r];
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            need[i][j] = max[i][j] - alloc[i][j];
            if (need[i][j] < 0){
                printf("Sorry the need is greater than max...! in the processor %d and Resource %d",i,j);
                exit(0);
            }
        }
    }
    
    int available[r];
    printf("Enter the available Resource : ");
    for(int i=0;i<r;i++){
        scanf("%d",&available[i]);
    }

    int count=0,completed[10]={0},seq[10]={0},check=0;
    
    printf("\nPROCESS\t\tALLOCATION\t\tMAX\t\tNEED\t\t\n");
    while(count != n){
        check++;
         if(check == n){
            printf("Its not in safe state ");
            exit(0);
         }
        for(int i=0; i < n ;i++){
            if (completed[i]!=1){
                if (check_safe(need[i],available,r)){
                for(int j=0;j<r;j++){
                    available[j] = available[j] - need[i][j] + max[i][j];
                }
                printf("%2d ",i);
                display(alloc[i],r);
                display(max[i],r);
                display(available,r);
                display(need[i],r);
                printf("\n");
                count++;
                completed[i] = 1;
               }
            }
        }
       
    }
    if(count == n){
        printf("\nProvided allocation is in safe state ");
    }else{
        printf("its not in safe state");
    }


}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%2d ",a[i]);
    }
    printf("\t");
}

int check_safe(int need[],int avail[],int n){
    for(int i = 0; i<n;i++){
        if(avail[i] < need [i]){
            return 0;
        }
    }
    return 1;
}