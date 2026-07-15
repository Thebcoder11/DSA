#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node {
        int data ;
        struct node * next;
    };
    struct node * head = 0;
    struct node * temp ;
    struct node * newnode;
    int choice = 1;
    while(choice ==1){
        newnode = (struct node *) malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d",&newnode -> data);
        newnode -> next = 0;
        
        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp-> next = newnode;
            temp = newnode;
        }

        printf("Press 1 do you want to add more : ");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp = temp -> next;
    }
    printf("\n");
    
    int count = 0;
    temp = head;
    while(temp!=0){
        count++;
        temp= temp->next;
    }
    printf("The Total number of nodes are : %d",count);
    return 0;
}