#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data;
    struct node * prev;
    struct node * next;
}*head=0,*tail=0,*newnode,*temp;
void createanode(){
    newnode = (struct node *) malloc(sizeof(struct node));
    count++;
    printf("Enter the data : ");
    scanf("%d",&newnode-> data);
    newnode -> prev = 0;
    newnode -> next = 0;
}
void createalinkedlist(){
    int choose ;
    printf("Press 1 if you want to add a node : ");
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
            head->prev = newnode;
        }
        printf("Press 1 if you want to continue : ");
        scanf("%d",&choose);
    }
}
void print(){
    temp = head;
    if(head == 0){
        printf("Linked list is Empty\n");
    }
    else {
        printf("\nThe total number of nodes is :%d\n",count);
        printf("The Linked list is => ");
        while(temp -> next !=tail->next){
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("%d ",temp -> data);
        printf("\n");
    }
}
void deletefromstart(){
    if(head == 0){
        printf("Linked list is Empty\n");
    }
    else if( count ==1){
        temp = head;
        head = tail = 0;
        free(temp);
        count --;
    }
    else{
        temp = head;
        temp -> next -> prev = tail;
        tail -> next = temp -> next;
        head = temp -> next;
        free(temp);
        count--;
    }
}
void deletefromend(){
    if(head == 0){
        printf("Linked List is Empty\n");
    }
    else if(count == 1){
        temp = head;
        head = tail = 0;
        free(temp);
        count --;
    }
    else{
        temp = tail;
        tail -> prev -> next = head;
        head -> prev = tail -> prev;
        tail = tail -> prev;
        free(temp);
        count --;
    }
}
void deletefrompos(){
    int i=1,position;
    printf("Enter the position : ");
    scanf("%d",&position);
    if(head == 0){
        printf("Linked list is Empty\n");
    }
    else if(position ==1){
        deletefromstart();
    }
    else if(position == count){
        deletefromend();
    }
    else if(position<1 || position> count){
        printf("Invalid Position\n");
        return;
    }
    else{
        temp = head;
        while(i<position){
            temp = temp-> next;
            i++;
        }
        temp->prev->next =temp->next;
        temp->next->prev = temp -> prev;
        free(temp);
        count--;
    }
}
int main(){
    createalinkedlist();
    print();
    int choose;
    printf("Press 1 if you want to delete from start\n");
    printf("Press 2 if you want to delete from end\n");
    printf("Press 3 if you want to delete from any position\n")
    printf("Enter your choice : ");
    scanf("%d",&choose);
    if(choose ==1){
        deletefromstart();  
        print();
    }
    else if(choose ==2){
        deletefromend();
        print();
    }
    else if(choose ==3){
        deletefrompos();
        print();
    }
    else{
        printf("Inavlid position\n");
    }
    return 0;
}