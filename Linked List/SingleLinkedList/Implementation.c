#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node * next;
    };
    struct node * head;
    head = 0;

    struct node * newnode;
    struct node * temp;

    int choice =1;
    while(choice ==1){
        newnode = (struct node * ) malloc (sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&newnode->data);
        newnode->next =0;
        
        if(head == 0){
            head = temp =newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to add more press 1 else 0 : ");
        scanf("%d",&choice);

    }
    temp = head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp= temp->next;
    }
    return 0;
}