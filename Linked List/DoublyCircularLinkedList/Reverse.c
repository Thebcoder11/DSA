#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data;
    struct node * next;
    struct node * prev;
}*head=0,*tail=0,*temp,*newnode;
void createanode(){
    newnode = (struct node *) malloc(sizeof(struct node));
    count++;
    printf("Enter the data : ");
    scanf("%d",&newnode-> data);
    newnode -> prev = 0;
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice;
    printf("Press 1 if you want to add a node : ");
    scanf("%d",&choice);
    while(choice ==1){
        createanode();
        if(head == 0){
            head = tail = newnode;
            head -> prev = tail;
            tail -> next = head;
        }
        else{
            newnode -> prev = tail;
            newnode -> next = head;
            tail -> next = newnode;
            head -> prev = newnode;
            tail = newnode;
        }
        printf("Press 1 if you want to continue : ");
        scanf("%d",&choice);
    }
}
void print(){
    if(head == 0){
        printf("The linked list is Empty \n");
    }
    else{
        printf("The total number of nodes are : %d",count);
        printf("\nThe linked list is => ");
        temp = head;
        while(temp ->next != tail -> next){
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("%d ",temp -> data);
        printf("\n");
    }
}
void reverse(){
    if(head == 0){
        printf("Linked list is Empty\n");
    }
    else if(count == 1){
        printf("Only 1 Element in the linked list reverse is same\n");
    }
    else{
        struct node * current = head;
        struct node * nextnode = current-> next;
        int i = 1;
        while(i<=count){
            current -> next = current -> prev;
            current -> prev = nextnode;
            current = nextnode;
            nextnode = current -> next;
            i++;
        }
        temp = tail;
        tail = current;
        head = temp;
    }
}
int main(){
    createalinkedlist();
    print();
    reverse();
    print();
    return 0;
}