#include<stdio.h>
#include<stdlib.h>

int count = 0;
struct node{
    int data;
    struct node * next;
};
struct node * newnode;
// global function if you are intialization them so intialize when they are declared
struct node * head = 0;

struct node * temp;

void start(){
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode ->data);
    newnode->next = head;
    head = newnode;
}
void end(){
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next = 0;
    
    temp = head;
    while(temp->next!=0){
        temp = temp ->next;
    }
    temp->next= newnode;
}
void pos(){
    int position;
    printf("Enter the position : ");
    scanf("%d",&position);
    if(count < position){
        printf("Invalid position");
    }
    else{
        int flag = 1;
        temp = head;
        while (flag<position){
            temp = temp->next;
            flag ++;
        }
        newnode = (struct node * ) malloc (sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = temp ->next;
        temp->next = newnode;
    }

}
int main(){
    int choice = 1;
    while(choice ==1){
        newnode = (struct node * ) malloc (sizeof(struct node));
        count++;
        printf("Enter the data : ");
        scanf("%d",&newnode->data);
        newnode->next = 0;

        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to add more Press 1 Otherwise 0 : ");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp !=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
    printf("The total number of nodes in a linked list are : %d",count);

    printf("\n");
    int add;
    printf("Press 1 for Insering the node in the starting \n");
    printf("Press 2 if you want to add the node in the last \n");
    printf("Press 3 if you want to add at particular location \n");
    scanf("%d",&add);
    if(add == 1){
        start();
    }
    if(add == 2){
        end();
    }
    if(add==3){
        pos();
    }
    temp = head;
    while(temp !=0){
        printf("%d ", temp->data);
        temp= temp->next;
    }

    return 0;
}