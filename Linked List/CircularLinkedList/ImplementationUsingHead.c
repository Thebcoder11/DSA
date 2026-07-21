#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
}*head=0,*temp,*newnode;
void createanode(){
    newnode = (struct node *) malloc (sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice = 1;
    while(choice == 1){
        createanode();
        if(head==0 ){
            head = temp = newnode;
            temp->next = head;
        }
        else{
            temp -> next = newnode;
            newnode -> next = head;
            temp = newnode;
        }
        printf("Press 1 if you want to add more : ");
        scanf("%d",&choice);
    }
}
void print(){
    temp = head;
    printf("\nThe linked list is => ");
    while(temp->next !=head){
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