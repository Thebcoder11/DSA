#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data;
    struct node * prev;
    struct node * next;
} *head=0,*newnode,*temp,*tail;
void createanode(){
    newnode = (struct node *) malloc (sizeof(struct node));
    count ++;
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode -> prev = 0;
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice = 1;
    while(choice ==1){
        createanode();
        if(head == 0){
            head = temp = tail = newnode;
        }
        else{
            temp -> next = newnode;
            newnode -> prev = temp;
            temp = newnode;
            tail = newnode;
        }
        printf("Do you want to add more Press 1 : ");
        scanf("%d",&choice);
    }
}
void reverse(){
    struct node * currentnode = head,*nextnode;
    while(currentnode != 0){
        nextnode = currentnode -> next;
        currentnode -> next = currentnode-> prev;
        currentnode -> prev = nextnode;
        currentnode = nextnode;
    }
    currentnode = head;
    head = tail;
    tail = currentnode;
}
void print(){
    temp = head;
    printf("The Linked list is => ");
    while(temp !=0){
        printf("%d ",temp-> data);
        temp = temp -> next;
    }
    printf("\n");
}
int main(){
    createalinkedlist();
    printf("The total number of nodes : %d",count);
    print();
    reverse();
    print();
    return 0;
}