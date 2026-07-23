#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data;
    struct node * next;
}*tail=0,*temp,*newnode;
void createanode(){
    newnode = (struct node *) malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode-> data);
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice = 1;
    while(choice ==1){
        createanode();
        count++;
        if(tail == 0){
            tail = newnode;
            tail -> next = newnode;
        }
        else{
            newnode-> next = tail -> next;
            tail -> next = newnode;
            tail = newnode;
        }
        printf("Press 1 if you want to add more : ");
        scanf("%d",&choice);
    }
}
void print(){
    printf("\nThe total number of nodes : %d\n",count);
    printf("The linked list is => ");
    temp = tail -> next;
    while(temp->next!=tail->next){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("%d ",temp -> data);
}
void reverse(){
    if(tail ==0){
        printf("Linked list is empty\n");
    }
    else if(count ==1){
        printf("Only 1 element is present in the linked list");
    }
    else{
        struct node * currentnode = tail-> next, *prevnode,*nextnode=currentnode->next;
        while(currentnode!=tail){
            prevnode = currentnode;
            currentnode = nextnode;
            nextnode = currentnode-> next;
            currentnode -> next = prevnode;
        }
        nextnode -> next = tail;
        tail = nextnode;
    }
}
int main(){
    createalinkedlist();
    print();
    reverse();
    print();
    return 0;
}