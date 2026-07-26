#include<stdio.h>
#include<conio.h>
#define N 5
int stack[N];
int top =-1;
void push(){
    if(top == N-1){
        printf("Overflown Condition\n");
    }
    else{
        int x ;
        printf("Enter the data : ");
        scanf("%d",&x);
        top++;
        stack[top] =x;
        printf("Element inputed successfully\n");
    }
}
void pop(){
    int item;
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else{
        item = stack[top];
        top--;
        printf("The item which is removed is :%d\n",item);
    }
}
void peek(){
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else{
        printf("The top most element is : %d\n",stack[top]);
    }
}
void display(){
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else{
        printf("\n The elements is the stack are => ");
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main(){
    int choose;
    do{
        printf("Press 1 for : Push\n");
        printf("Press 2 for : pop\n");
        printf("Press 3 for : peek\n");
        printf("Press 4 for : display\n\n");
        printf("Enter your choice : ");
        scanf("%d",&choose);
        switch(choose){
            case 1 : push(); break;
            case 2 : pop() ; break;
            case 3 : peek() ; break;
            case 4 : display() ; break;
            default : printf("Invalid Input"); break;
        }
    }while(choose!=0);
    getch();
    return 0;
}