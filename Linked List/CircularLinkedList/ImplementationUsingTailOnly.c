#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
}*tail=0,*newnode;
void createanode(){
    newnode = (struct node * ) malloc (sizeof(struct node ));
    printf("Enter the data : ");
    scanf("%d",&newnode -> data);
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice =1;
    while(choice==1){
        createanode();
        if(tail==0){
            tail = newnode;
            tail -> next = newnode;
        }
        else{
            newnode->next = tail -> next;
            tail -> next = newnode;
            tail = newnode;
        }
        printf("Press 1 if you want to add more : ");
        scanf("%d",&choice);
    }
}
void print(){
    printf("\nThe linked list is => ");
    struct node * temp = tail -> next;
    while(temp -> next != tail-> next){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("%d ",temp -> data);
}
int main(){
    createalinkedlist();
    print();
    return 0;
}
