#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
int count = 0;
void enqueue(int x){
    if(front == N-1 && rear == N-1){
        printf("OverFlown Condition\n");
    }
    else if(front == -1 && rear == -1){
        front = rear =0;
        queue[rear] = x;
        count++;
    }
    else{
        rear++;
        queue[rear] = x;
        count++;
    }
}
void dequeue(){
    if(front == -1 && rear == -1){
        printf("UnderFlown Condition\n");
    }
    else if(front == rear){
        printf("The dequeue element from the queue is :%d\n",queue[front]);
        front = rear = -1;
        count--;
    }
    else{
        printf("The dequeue element from the queue is : %d\n",queue[front]);
        front++;
        count--;
    }
}
void peek(){
    if(front == -1 && rear ==-1){
        printf("Underflown Condition\n");
    }
    else{
        printf("The front element of the queue is : %d\n",queue[front]);
    }
}
void display(){
    if(front ==-1 && rear ==-1){
        printf("Underflown Conditon\n");
    }
    else{
        printf("The element of queue are => ");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\nThe total number of nodes are :%d\n",count);
    }
}
int main(){
    int choice,n;
    do{
        printf("Press 0 for : exit\n");
        printf("Press 1 for : Enqueue \n");
        printf("Press 2 for : Dequeue \n");
        printf("Press 3 for : peek \n");
        printf("Press 4 for : display \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 0:
                break;
            case 1: 
                printf("Enter the number : ");
                scanf("%d",&n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3: 
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    }while(choice!=0);
    return 0;
}