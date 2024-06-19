#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    //NO_OF_PROCESSOR
    int n;
    printf("Enter the number of processes : ");
    scanf("%d",&n);
    
    //bt
    int bt[n],p[n];
    printf("Enter the burst time for the processes : \n");
    for(int i =0;i<n;i++){
        printf("Process %d : ",i+1);
        p[i] = i+1;
        scanf("%d",&bt[i]);
    }
    //sort bt
    for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++)
       if(bt[j] < bt[i] ){
          swap(&bt[i],&bt[j]);
          swap(&p[i],&p[j]);
       }
    //output
    int wait_time = 0, tat = 0;
    float total_wait = 0;
    printf("PROCESSOR    BURST TIME     WAIT TIME      TURN_AROUND TIME ");
    for(int i=0;i<n;i++){
        tat = wait_time + bt[i];
        printf("\n  %2d          %2d            %2d              %2d ",p[i],bt[i],wait_time,tat);
        total_wait += wait_time;
        wait_time = tat;
    }
    printf("\nAverage waiting time : %f",(total_wait)/n);
    printf("\nAverage turn around time : %f",(total_wait + tat)/n);

}