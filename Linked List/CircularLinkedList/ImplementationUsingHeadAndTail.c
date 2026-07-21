#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
}*head=0,*tail,*newnode;
void createanode(){
    newnode = (struct node *) malloc(sizeof(struct node));
    printf("Enter the Data : ");
    scanf("%d",&newnode-> data);
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice = 1;
    while(choice ==1){
        createanode();
        if(head == 0){
            head = tail = newnode;
            tail->next = head;
        }
        else{
            tail -> next = newnode;
            newnode -> next = head;
            tail = newnode;
        }
        printf("Press 1 if you want to add more : ");
        scanf("%d",&choice);
    }
}
void print(){
    printf("\nThe linked list is => ");
    struct node * temp = head;
    while(temp-> next != tail-> next){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("%d ",temp-> data);
}
int main(){
    createalinkedlist();
    print();
    return 0;
}