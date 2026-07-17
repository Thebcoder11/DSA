#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data ;
    struct node * prev;
    struct node * next;
};
struct node * temp;
struct node * head = 0;
struct node * tail;
struct node * newnode;
void createanode(){
    newnode = (struct node *) malloc(sizeof(struct node));
    count++;
    printf("Enter the data : ");
    scanf("%d",&newnode->data);
    newnode -> prev = 0;
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice =1;
    while(choice ==1){
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
        printf("Do you want to add more : ");
        scanf("%d",&choice);
    }
    printf("\n");
}
void deleteastartnode(){
    temp = head;
    head = temp -> next;
    head-> prev = 0;
    free(temp);
    count--;
}
void deletefromend(){
    temp = tail;
    tail -> prev ->next = 0;
    tail = tail -> prev;
    free(temp);
    count--; 
}
void deletefrompos(){
    temp = head;
    int position ,i=1;
    printf("Enter the position : ");
    scanf("%d",&position);
    if(position == 1){
        deleteastartnode();
    }
    else if(position == count){
        deletefromend();
    }
    else if(position <1 || position>count){
        printf("Invalid position");
    }
    else{
        while(i<position){
            temp = temp -> next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        count --;
    }
}
void print(){
    printf("The linked =>  ");
    temp = head;
    while(temp!=0){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}
int main(){
    createalinkedlist();
    print();
    printf("The Total number of nodes : %d\n",count);
    int choose;
    printf("\nPress 1 if you want to delete a start node\n");
    printf("Press 2 if you want to delete a end node\n");
    printf("Press 3 if you want to delete from specific position\n");
    printf("Enter your choice : ");
    scanf("%d",&choose);
    if(choose ==1){
        deleteastartnode();
    }
    else if(choose ==2){
        deletefromend();
    }
    else if(choose ==3){
        deletefrompos();
    }
    else{
        printf("Invalid input\n");
    }
    print();
    printf("The Total number of nodes : %d",count);
    return 0;
}
