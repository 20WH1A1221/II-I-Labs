#include <stdio.h>
int item,choice,n,queue[100],i,rear,front=-1;
void enqueue();
int dequeue();
void display();
int main(){
    printf("enter size of queue");
    scanf("%d",&n);
    printf("enter 1.enqueue,2.dequeue,3.display\n");
    do{
    printf("enter choice");
    scanf("%d",&choice);
    switch(choice){
           case 1:printf("enter item to be push");
                  scanf("%d",&item);
                  enqueue(item);
                  break;
           case 2:printf("enter item to be deleted");
                  scanf("%d",&item);
                  dequeue(item);
                  break;
           case 3:display();
                  break;      
    }
    }while(choice!=4);
    return 0;
}
void enqueue(int item){
     if(rear==n-1){
          printf("overflow\n");
     }
     if(front==-1){
         front=rear=0;
     }
     else{
         rear+=1;
         queue[rear]=item;
     }
}        
int dequeue(){
      if(front==-1){
         printf("underflow\n");
      }
      item=queue[front];
        if(front==rear){
           front=rear=-1;
       }    
        else{
          front+=1;
       }  
      return item;
}
void display(){
     if(front==-1){
        printf("queue is empty");
     }
     else{
     printf("queue is\n");
     for(i=front;i<=rear;i++){
            printf("%d",queue[i]);
      }
     }
}     
