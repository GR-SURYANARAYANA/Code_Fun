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
    int bt[n],p[n],priority[n];
    printf("Enter the burst time and priority for the processes : \n");
    for(int i =0;i<n;i++){
        printf("Process %d : ",i+1);
        scanf("%d%d",&bt[i],&priority[i]);
        p[i] = i+1;
    }
    //sort bt
    for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++)
       if(priority[j] > priority[i] ){
          swap(&bt[i],&bt[j]);
          swap(&p[i],&p[j]);
          swap(&priority[i],&priority[j]);
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