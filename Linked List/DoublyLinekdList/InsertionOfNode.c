#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data;
    struct node * prev;
    struct node * next;
};
struct node * head = 0;
struct node * newnode;
struct node * temp;
struct node * tail;
void createanode(){
    newnode = (struct node *) malloc (sizeof(struct node));
    count++;
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode -> prev = 0;
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice = 1;
    while(choice == 1){
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
void insertatstart(){
    temp = head;
    createanode();
    newnode -> next = temp;
    temp -> prev = newnode;
    head = newnode;
}
void insertatend(){
    createanode();
    newnode -> prev = tail;
    tail -> next = newnode;
    tail = newnode;
}
void insertatpos(){
    int position;
    printf("Enter the position : ");
    scanf("%d",&position);
    if(position == 1){
        insertatstart();
    }
    else if(position == count+1){
        insertatend();
    }
    else if (position<1 || position> count+1){
        printf("Invalid Position\n");
    }
    else{
        int i = 1;
        temp = head;
        createanode();
        while(i<position-1){
            temp = temp -> next;
            i++;
        }
        newnode -> prev = temp;
        newnode -> next = temp->next;
        temp -> next = newnode;
        newnode->next->prev = newnode;
    }
}
void insertafterpos(){
    int position,i=1;
    printf("Enter the after position you want to add a node : ");
    scanf("%d",&position);
    temp = head;
    if(position == count){
        insertatend();
    }
    else if(position<1 || position>count+1){
        printf("Invalid Position\n");
    }
    else{
        while(i<position){
            temp = temp -> next;
            i++;
        }
        createanode();
        newnode -> prev = temp;
        newnode -> next = temp -> next;
        temp -> next = newnode;
        newnode->next -> prev = newnode;
    }
}
void print(){
    temp = head;
    while(temp!=0){
        printf("%d ",temp-> data);
        temp = temp -> next;
    }
    printf("\n");
}
int main(){
    createalinkedlist();
    print();
    printf("The total number of nodes : %d\n",count);
    int choose ;
    printf("Press 1 if you want to add a node in the start \n");
    printf("Press 2 if you want to add a node at the end\n");
    printf("Press 3 if you want to add at any specific positon\n");
    printf("Press 4 if you want to add after certain position\n");
    printf("\nEnter your choice : ");
    scanf("%d",&choose);
    if (choose == 1){
        insertatstart();
    }
    else if (choose ==2){
        insertatend();
    }
    else if (choose ==3){
        insertatpos();
    }
    else{
        insertafterpos();
    }
    print();
    printf("The total number of nodes : %d\n",count);
    return 0;
}