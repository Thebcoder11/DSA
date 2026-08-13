#include<stdio.h>
#define N 5
int queue[N];
int rear = -1;
int front = -1;
void enqueue(int x){
    if((rear+1)%N==front){
        printf("OverFlown Condition\n");
    }
    else if(front ==-1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else{
            rear = (rear+1)%N;
            queue[rear]=x;
        }
}
void dequeue(){
    if(front ==-1 &&rear ==-1){
        printf("Underflown Condition\n");
    }
    else if(front == rear){
        printf("The dequeue element from the queue is : %d\n",queue[front]);
        front = rear = -1;
    }
    else{
        printf("The dequeue element from the queue is : %d\n",queue[front]);
        front = (front+1)%5;
    }
}
void peek(){
    if(front ==-1 && rear == -1){
        printf("Underflown Condition\n");
    }
    else{
        printf("The front element of the queue is : %d\n",queue[front]);
    }
}
void display(){
    if(front == -1 && rear ==-1 ){
        printf("Underflown Condition\n");
    }
    else {
        printf("The element of the queue are => ");
        int i = front;
        while(i!=rear){
            printf("%d ",queue[i]);
            i = (i+1)%5;

        }
        printf("%d",queue[i]);
        printf("\n");
    }
}
int main(){
    int choice,n;
    do{
        printf("Press 0 for : Exit\n");
        printf("Press 1 for : Enqueue\n");
        printf("Press 2 for : Dequeue\n");
        printf("Press 3 for : peek\n");
        printf("Press 4 for : display\n");
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
            default :
                printf("Invalid input\n");
                break;
        }
    }while(choice!=0);
    return 0;
}
