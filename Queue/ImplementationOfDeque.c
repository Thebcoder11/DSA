#include<stdio.h>
#define N 5
int deque[N];
int front = -1;
int rear = -1;
void enqueuefromfront(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if((rear+1)%N==front){
        printf("Overflown Condition");
    }
    else if(front ==-1 && rear == -1){
        front = rear = 0;
        deque[front] = n;
    }
    else if(front==0){
        front = N-1;
        deque[front] = n;
    }
    else {
        front--;
        deque[front] = n;
    }
}
void enqueuefromrear(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if((rear+1)%N==front){
        printf("Overflown Condition\n");
    }
    else if(front ==-1 && rear ==-1){
        front = rear = 0;
        deque[rear] = n;
    }
    else if(rear == N-1){
        rear = 0;
        deque[rear] = n;
    }
    else{
        rear++;
        deque[rear] = n;
    }
}
void enqueue(){
    int choice;
    printf("Press 1 for : enqueuefromfront\n");
    printf("Press 2 for : enqueuefromend\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            enqueuefromfront();
            break;
        case 2:
            enqueuefromrear();
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
}
void dequeuefromfront(){
    if(front == -1 && rear == -1){
        printf("Underflow Conditon\n");
    }
    else if(front == rear){
        front=rear=-1;
    }
    else if(front==N-1){
        front=0;
    }
    else{
        front++;
    }
}
void dequeuefromrear(){
    if(front==-1 && rear ==-1){
        printf("Underflow Condition\n");
    }
    else if(front == rear){
        front = rear =-1;
    }
    else if(rear == 0){
        rear = N-1;
    }
    else{
        rear--;
    }
}
void dequeue(){
    int choice;
    printf("Press 1 for : dequeuefromfront\n");
    printf("Press 2 for : dequeuefromend\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            dequeuefromfront();
            break;
        case 2:
            dequeuefromrear();
            break;
        default :
            printf("Invalid Input\n");
            break;
    }
}
void display(){
    if(front==-1 && rear ==-1){
        printf("Underflow Condition\n");
    }
    else{
        int i= front;
        printf("The elements of deque are =>");
        while(i!=rear){
            printf("%d ",deque[i]);
            i = (i+1)%N;
        }
        printf("%d ",deque[i]);
        printf("\n");
    }
}
void getfront(){
    if(front ==-1 && rear ==-1){
        printf("Underflown Condition\n");
    }
    else{
        printf("The front element of the deque is : %d\n",deque[front]);
    }
}
void getrear(){
    if(front== -1 && rear ==-1){
        printf("Underflown Condition\n");
    }
    else{
        printf("The rear element of the deque is :%d\n",deque[rear]);
    }
}
int main(){
    int choice,n;
    do{
        printf("Press 0 for : ");
        printf("Press 1 for : Enqueue\n");
        printf("Press 2 for : dequeue\n");
        printf("Press 3 for : display\n");
        printf("Press 4 for getfront\n");
        printf("Press 5 for : getrear\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 0:
                break;
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                getfront();
                break;
            case 5:
                getrear();
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    }while(choice!=0);
    return 0;
}