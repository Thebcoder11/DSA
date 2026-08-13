#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node * next;
}*front =0,*rear=0,*newnode,*temp;
int count = 0;
void enqueue(int x){
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> next = 0;
    if(front ==0 && rear==0){
        front = rear = newnode;
        
    }
    else{
        rear -> next = newnode;
        rear = newnode;
    }
    count++;
}
void dequeue(){
    temp = front;
    if(temp == 0){
        printf("Underflown Condition\n");
    }
    else if(front == rear){
        temp = front;
        free(front);
        front = rear = 0;
        count --;
    }
    else{
        printf("The element to be dequeue is :%d\n",front->data);
        front = front->next;
        free(temp);
        count--;
    }
}
void peek(){
    if(front==0 && rear==0){
        printf("Underflown Condition\n");
    }
    else{
        printf("the front element of the queue is : %d\n",front-> data);
    }
}
void display(){
    printf("The total number of nodes in the queue are : %d\n",count);
    temp = front;
    if(temp ==0){
        printf("UnderFlown Condition\n");
    }
    else{
        printf("The elements is the queue are => ");
        while(temp!=0){
            printf("%d ",temp->data);
            temp = temp -> next;
        }
        printf("\n");
    }
}
int main(){
    int choice , n;
    do{
        printf("Press 0 for : exit \n");
        printf("Press 1 for : Enqueue \n");
        printf("Press 2 for : Dequeue \n");
        printf("Press 3 for : peek \n");
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
            default:
                printf("Invalid input \n");
                break;
        }
    }while(choice!=0);
    return 0;
}