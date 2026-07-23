#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data;
    struct node * prev;
    struct node * next;
}*head=0,*tail=0,*newnode;
void createanode(){
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode -> data);
    newnode -> prev = 0;
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice =1 ;
    while(choice ==1){
        createanode();
        count ++;
        if(head == 0){
            head = tail = newnode;
            head -> prev = newnode;
            head -> next = newnode;
        }
        else{
            tail -> next = newnode;
            newnode -> prev = tail;
            newnode -> next = head;
            head -> prev = newnode;
            tail = newnode;
        }
        printf("Press 1 if you want to add a node : ");
        scanf("%d",&choice);
    }
}
void print(){
    printf("\nThe total number of nodes : %d\n",count);
    printf("The linked list is => ");
    struct node * temp = head;
    if(head == 0){
        printf("Linked list is Empty\n");
    }
    else{
        while(temp!=tail){
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("%d ",temp -> data);
    }
    printf("\n");
}
int main(){
    createalinkedlist();
    print();
    return 0;
}