#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data;
    struct node * next;
}*tail=0,*newnode,*temp;
void createanode(){
    newnode = (struct node *) malloc (sizeof(struct node));
    count++;
    printf("Enter the data : ");
    scanf("%d",&newnode -> data);
    newnode -> next = 0;
}
void createalinkedlist(){
    int choice = 1;
    while(choice == 1){
        createanode();
        if(tail == 0){
            tail = newnode;
            tail->next = newnode;
        }
        else{
            newnode -> next = tail -> next;
            tail-> next = newnode;
            tail = newnode;
        }
        printf("Press 1 if you want to add more : ");
        scanf("%d",&choice);
    }
}
void print(){
    printf("The linked list is => ");
    if(tail==0){
        printf("\nLinked list is Empty\n");
    }
    else{
        temp = tail-> next;
        while(temp->next != tail-> next){
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("%d ",temp-> data);
    }
    printf("\nThe total number of nodes is : %d\n",count);
}
void deletefrombegining(){
    if(count == 1){
        temp = tail;
        tail = 0;
        free(temp);
    }
    else{
        temp = tail -> next;
        tail -> next = temp -> next;
        free(temp);
    }
    count--;
}
void deletefromend(){
    if(count ==1){
        temp = tail;
        tail = 0;
        free(temp);
    }
    else{
        temp = tail;
        struct node * prev = tail -> next;
        while(prev -> next != tail){
            prev = prev -> next;
        }
        prev -> next = tail -> next;
        
        tail = prev;
        free(temp);
    }
    count --;
}
void deletefrompos(){
    int position;
    printf("Enter the position : ");
    scanf("%d",&position);
    if(count == 1 || position == 1){
        deletefrombegining();
    }
    else if (position == count){
        deletefromend();
    }
    else if(position <1 ||position>count){
        printf("Invalid Position\n");
        return;
    }
    else{
        struct node * currentnode = tail -> next;
        struct node * prevnode;
        int i=1;
        while(i<position){
            prevnode = currentnode;
            currentnode = currentnode-> next;
            i++;
        }
        prevnode-> next = currentnode-> next;
        free(currentnode);
        count --;
    }
}
int main(){
    createalinkedlist();
    print();
    int choose;
    printf("Press 1 if you want to delete from start \n");
    printf("Press 2 if you want to delete last node \n");
    printf("Press 3 if you want to delete from position\n");
    printf("Enter your choice : ");
    scanf("%d",&choose);
    if(choose ==1){
        deletefrombegining();
    }
    else if(choose ==2){
        deletefromend();
    }
    else if(choose ==3){
        deletefrompos();
    }
    else{
        printf("Invalid Input\n");
    }
    print();
}
