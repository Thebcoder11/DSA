#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data;
    struct node * next;
}*tail=0,*newnode;
void createanode(){
    newnode = (struct node *) malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode-> data);
    newnode -> next = 0;
    count++;
}
void createalinkedlist(){
    int choice = 1;
    while(choice ==1){
        createanode();
        if(tail==0){
            tail = newnode;
            tail->next = newnode;
        }
        else{
            newnode -> next = tail-> next;
            tail-> next = newnode;
            tail = newnode;
        }
        printf("Press 1 if you want to add more : ");
        scanf("%d",&choice);
    }
}
void print(){
    printf("The linked list is => ");
    struct node * temp = tail-> next;
    while(temp-> next != tail-> next){
        printf("%d ",temp->data);
        temp = temp-> next;
    }
    printf("%d ",temp -> data);
    printf("\nThe Total number of nodes are : %d\n",count);
}
void insertatbegining(){
    createanode();
    struct node * temp = tail -> next;
    newnode -> next = tail -> next;
    tail->next = newnode;
}
void insertatend(){
    createanode();
    newnode -> next = tail -> next;
    tail -> next = newnode;
    tail = newnode;
}
void insertatpos(){
    struct node * temp = tail -> next;;
    int i=1, position;
    printf("Enter the Position : ");
    scanf("%d",&position);
    if(position ==1 ){
        insertatbegining();
    }
    else if(position == count+1){
        insertatend();
    }
    else if(position<1|| position>count+1){
        printf("Invalid Position\n");
        return;
    }
    else{
        while(i<position-1){
            temp = temp -> next;
            i++;
        }
        createanode();
        newnode -> next = temp -> next;
        temp -> next= newnode;
    }
}
int main(){
    int choose ;
    createalinkedlist();
    print();
    printf("Press 1 if you want to insert in the start\n");
    printf("Press 2 if you want to insert in the end\n");
    printf("Press 3 if you want to insert at any position\n");
    printf("Enter your choice : ");
    scanf("%d",&choose);
    if(choose==1){
        insertatbegining();
    }
    else if(choose ==2){
        insertatend();
    }
    else if(choose ==3){
        insertatpos();
    }
    else{
        printf("Invalid input");
    }
    print();
    return 0;
}
