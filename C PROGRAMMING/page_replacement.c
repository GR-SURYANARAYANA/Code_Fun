#include<stdio.h>
#include<stdlib.h>
void initialize();
void perform_fifo();
void display();
int check_page_fault_fifo();
void perform_optimal();
int check_page_fault_optimal(int page_no,int index);
int length,f,pg_seq[30],frame[10],no_pg_fault=0,top=-1;




int main(){
    while(1){
        int ch;
        printf("Page Replacement Algorithm : \n");
        printf("1.Enter Data\n2.FIFO\n3.Optimal\n4.Exit\nEnter your chocie : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the length of page : ");
                scanf("%d",&length);
                printf("Enter the Page reference sequence : \n");
                for(int i=0;i<length;i++){
                    scanf("%d",&pg_seq[i]);
                }
                printf("Enter the number of frames : ");
                scanf("%d",&f);
                break;
            case 2:
                initialize();
                perform_fifo();
                break;
            case 3:
                initialize();
                perform_optimal();
                break;
            case 4:exit(0);break;
            default: printf("\nInvalid choice \n");
        }
    }
}

void initialize(){
    for(int i=0;i<f;i++){
        frame[i] = -1;
    }
    no_pg_fault = 0;
}
void display(int page_no){
    printf("FOR %d : ",page_no);
        for(int i = 0;i<f; i++){
           if(frame[i] != -1 ){
            printf(" %d ",frame[i]);
           }
        }
        printf("\n");
}

//Perform FIFO
int check_page_fault_fifo(int page_no){
    for(int i=0;i<f;i++){
        if(page_no == frame[i]){
            return 0;
        }
    }
    top = (top + 1) % 3;
    frame[top] = page_no;
    return 1; 
}
void perform_fifo(){
   for(int i=0;i<length;i++){
    if (check_page_fault_fifo(pg_seq[i])){
        display(pg_seq[i]);
    }else{
        printf("FOR %d : No page Fault\n",pg_seq[i]);
        no_pg_fault +=1;        
    }
   }
   printf("NO PAGE FAULT : %d\n",no_pg_fault);
}

//Perform Optimal
int get_min_index(int page_no,int index){
    for(int i=index + 1; i<length; i++){
        if(page_no == pg_seq[i]){
            return i;
        }
    }
    return 999;
}
int check_page_fault_optimal(int page_no,int index){
    for(int i=0;i<f;i++){
        if(page_no == frame[i]){
            return 0;
        }
    }
    for(int i=0;i<f;i++){
        if(frame[i] == -1){
            frame[i] = page_no;
            return 1;
        }
    }
    int far = 0,replace_index = 0;
    for(int i=0;i<f;i++){
        if(get_min_index(frame[i],index) >= far){
            replace_index = i;
        }
    }
    frame[replace_index] = page_no;
    return 1;
}
void perform_optimal(){
    for(int i=0;i<length;i++){
    if (check_page_fault_optimal(pg_seq[i],i)){
        display(pg_seq[i]);
    }else{
        printf("FOR %d : No page Fault\n",pg_seq[i]);
        no_pg_fault +=1;        
    }
   }
   printf("NO PAGE FAULT : %d\n",no_pg_fault);
}



