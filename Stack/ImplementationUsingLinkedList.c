#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int count = 0;
struct node{
    int data;
    struct node * next;
}*top=0,*temp,*newnode;
void push(int x){
    newnode = (struct node *) malloc(sizeof(struct node));
    count++;
    newnode -> data = x;
    newnode -> next = top;
    top = newnode;
}
void pop(){
    if(top == 0){
        printf("underflow Condition\n");
    }
    else{
        printf("The removed element is :%d\n",top->data);
        temp = top;
        top = top -> next;
        free(temp);
        count--;
    }
}
void peek(){
    if(top==0){
        printf("Stack is Empty\n");
    }
    else{
        printf("The top most element is : %d\n",top->data);
    }
}
void display(){
    if(top ==0){
        printf("Stack is Empty\n");
    }
    else{
        printf("The elements of stack are => ");
        struct node * temp = top;
        while(temp!=0){
            printf("%d ",temp -> data);
            temp = temp-> next;
        }
        printf("\n");
        printf("The total number of nodes are :%d\n\n",count);
    }
}
int main(){
    int choose,number;
    do{
        printf("Press 1 for : push\n");
        printf("Press 2 for : pop\n");
        printf("Press 3 for : peek\n");
        printf("Press 4 for : display\n");
        printf("Enter your choice : ");
        scanf("%d",&choose);
        switch(choose){
            case 1 :
                printf("Enter the number you want to add : ");
                scanf("%d\n",&number);
                push(number);
                break;
            case 2 : 
                pop();
                break;
            case 3 : 
                peek(); 
                break;
            case 4 : 
                display();
                break;
        }
    }while(choose !=0);
    getch();
    return 0;
}