#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data ;
    struct node * prev;
    struct node * next;
}*head=0,*tail=0,*newnode,*temp;
void createanode(){
    newnode = (struct node *)malloc(sizeof(struct node));
    count++;
    printf("Enter the data : ");
    scanf("%d",&newnode -> data);
    newnode-> prev = 0;
    newnode-> next = 0;
}
void createalinkedlist(){
    int choose ;
    printf("Press 1 if you want to create a node : ");
    scanf("%d",&choose);
    while(choose==1){
        createanode();
        if(head == 0){
            head = tail = newnode;
            head -> prev = tail;
            tail -> next = head;
        }
        else{
            newnode -> prev = tail;
            newnode -> next = head;
            tail -> next = newnode;
            tail = newnode;
        }
        printf("Do you want to continue Press 1 : ");
        scanf("%d",&choose);
    }
    if(count == 0){
        printf("Linked list is Empty\n");
    }
}
void print(){
    if(head == 0){
        printf("Linked list is Empty\n");
    }
    else{
        printf("The Total number of nodes : %d\n",count);
        printf("The linked list is => ");
        temp = head;
        while(temp->next!=tail->next){
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("%d ",temp->data);
    }
    printf("\n");
}
void insertatbegining(){
    if(head == 0){
        createanode();
        head = tail = newnode;
        head -> prev = newnode;
        head -> next = newnode;
    }
    else{
        temp = head;
        createanode();
        newnode -> prev = tail;
        newnode -> next = head;
        head -> prev = newnode;
        tail -> next = newnode;
        head = newnode;
    }
}
void insertatend(){
    if(head == 0){
        createanode();
        head = tail = newnode;
        head -> prev = newnode;
        head -> next = newnode;
    }
    else{
        createanode();
        newnode -> prev = tail;
        newnode -> next = head;
        tail -> next = newnode;
        head -> prev = newnode;
        tail = newnode;
    }
}
void insertatpos(){
    if(head == 0){
        insertatbegining();
    }
    else{
        int i = 1, position;
        printf("Enter the position : ");
        scanf("%d",&position);
        if(position==1){
            insertatbegining();
        }
        else if(position == count+1){
            insertatend();
        }
        else if( position<1||position>count+1){
            printf("Invalid position\n");
            return;
        }
        else{
            temp = head;
            while(i<position-1){
                temp = temp -> next;
                i++;
            }
            createanode();
            newnode -> prev = temp;
            newnode -> next = temp -> next;
            temp -> next -> prev = newnode;
            temp -> next = newnode;
        }
    }

}
int main(){
    createalinkedlist();
    print();
    int choose ;
    printf("Press 1 if you want to insert at start \n");
    printf("Press 2 if you want to insert at end\n");
    printf("Press 3 if you want to insert at any position\n");
    printf("Enter your choice : ");
    scanf("%d",&choose);
    if(choose ==1){
        insertatbegining();
        print();
    }
    else if(choose ==2){
        insertatend();
        print();
    }
    else if(choose ==3){
        insertatpos();
        print();
    }
    else{
        printf("Invalid Input\n");
    }
    return 0;
}
