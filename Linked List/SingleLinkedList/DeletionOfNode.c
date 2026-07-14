#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data ;
    struct node * next;
};
struct node * temp;
struct node * newnode;
struct node * head = 0;

void start(){
    temp = head;
    if(head == 0){
        printf("Linked list is empty");
    }
    else if(count ==1){
        head = 0;
        free(temp);
        count--;
    }
    else{
        head = temp -> next;
        free(temp);
        count--;
    }
}
void end(){
    temp = head;
    if(head == 0){
        printf("Linked list is empty");
    }
    else if(count == 1){
        head = 0;
        free(temp);
        count--;
    }
    else{
        struct node * prevnode = 0;
        while(temp->next !=0){
            prevnode = temp;
            temp = temp ->next;
        }
        prevnode -> next = 0;
        free(temp);
        count --;
    }

}
void pos(){
    temp = head;
    int position, i=1;
    printf("Enter the position : ");
    scanf("%d",&position);
    if(position > count || position <= 0){
        printf("Invalid positon");
        return;
        
    }
    if(head == 0){
        printf("Linked list in Empty");
    }
    else if(count ==1){
        head = 0;
        free(temp);
        count --;
    }
    else if(count == 2){
        if(position == 1){
            head = temp -> next;
            free(temp);
            count --;
        }
        else{
            struct node * lastnode = 0;
            lastnode = temp -> next;
            free(lastnode);
            temp ->next = 0;
            count --;
        }
    }
    else if(position ==1){
        head = temp -> next;
        free(temp);
        count --;
    }
    else{
        struct node * nextnode = 0;
        while(i<position-1){
            temp =temp -> next;
            i++;
        }
        nextnode = temp -> next;
        temp -> next = nextnode -> next;
        free(nextnode);
        count--;
    }

}
int main(){
    int choice = 1;
    while(choice == 1){
        newnode = (struct node *) malloc(sizeof(struct node));
        count ++;
        printf("Enter the data : ");
        scanf("%d",&newnode -> data);
        newnode -> next = 0;

        if(head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }

        printf("Press 1 if you want to add a node : ");
        scanf("%d",&choice);

    }
    temp = head;
    while(temp !=0){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
    printf("The total number of nodes : %d",count);
    printf("\n");
    int choose;
    printf("Press 1 for deletion in starting \n");
    printf("Press 2 for deletion in the end \n");
    printf("Press 3 for deletion at specific location \n");
    scanf("%d",&choose);
    if(choose==1){
        start();
    }
    else if(choose ==2){
        end();
    }
    else if(choose == 3){
        pos();
    }
    else{
        printf("Wrong Input\n");
    }
    printf("After deletion : ");
    temp = head;
    while(temp !=0){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
    printf("The total number of nodes are : %d",count);
    return 0;
}