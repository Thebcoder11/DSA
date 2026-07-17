#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node {
    int data ;
    struct node * prev;
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
        scanf("%d",&newnode -> data);
        newnode -> prev = 0;
        newnode -> next = 0;

        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp -> next = newnode;
            newnode -> prev = temp;
            temp = newnode;
        }

        printf("Press 1 if you want to add more : ");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp !=0){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    return 0;
}