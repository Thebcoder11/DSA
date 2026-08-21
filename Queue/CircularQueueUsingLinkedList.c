#include<stdio.h>
#include<stdlib.h>
int count =0;
struct node{
    int data ;
    struct node * next;
}*front=0,*rear=0,*newnode,*temp;
void enqueue(int x){
    newnode = (struct node *) malloc(sizeof(struct node));
    if(front ==0 && rear ==0){
        newnode -> data = x;
        newnode -> next = front;
        front = rear = newnode;
    }
    else{
        
        newnode -> data =x;
        newnode -> next = front;
        rear -> next = newnode;
        rear = newnode;
    }
}
void dequeue(){
    temp = front;
    if(front ==0 && rear == 0){
        printf("Underflown Condition\n");
    }
    else if(front == rear){
        printf("The dequeue element from the queue is : %d\n",front-> data);
        front = rear = 0;
        free(temp);
    }
    else{
        printf("The dequeue element from the queue is : %d\n",front-> data);
        front = front -> next;
        rear -> next = front;
        free(temp);
    }
}
void peek(){
    if(front == 0 && rear == 0){
        printf("UnderFlown Condition\n");
    }
    else {
        printf("The front element of the queue is : %d\n",front-> data);
    }
}
void display(){
    temp = front;
    if(front == 0 && rear ==0){
        printf("UnderFlown Condition\n");
    }
    else{
        printf("The elements in the queue are => ");
        while(temp-> next != front){
            printf("%d ",temp -> data);
            temp = temp-> next;
        }
        printf("%d ", temp -> data);
        printf("\n");
    }
}
int main(){
    int choice,n;
    do{
        printf("Press 0 for : Exit\n");
        printf("Press 1 for : Enqueue\n");
        printf("Press 2 for : Dequeue\n");
        printf("Press 3 for peek\n");
        printf("Press 4 for : display\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
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
        }
    }while(choice!=0);
    return 0;
}