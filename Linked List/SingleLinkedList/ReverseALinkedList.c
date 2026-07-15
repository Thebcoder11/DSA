#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
struct node * temp;
struct node * head = 0;
struct node * newnode;
int main(){
    int choice = 1;
    while(choice ==1){
        newnode = (struct node *) malloc (sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&newnode->data);
        newnode -> next = 0;
        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp -> next = newnode;
            temp = newnode;
        }
        printf("Press 1 if you want to add more : ");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp!=0){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");

    // reverse an array
    struct node * prevnode = 0;
    struct node * currentnode = head;
    struct node * nextnode = head;
    if(head == 0){
        printf("Linked list is Empty");
    }
    else{
        while(nextnode !=0){
            nextnode = nextnode -> next;
            currentnode -> next = prevnode;
            prevnode = currentnode;
            currentnode = nextnode;
        }
        head = prevnode;
    }
    temp = head;
    while(temp != 0){
        printf("%d ",temp->data);
        temp = temp-> next;
    }
    return 0;
}