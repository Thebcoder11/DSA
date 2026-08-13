#include<stdio.h>
#define N 5
int stack1[N],stack2[N];
int top1=-1,top2=-1;
int count = 0;
void enqueue(int x){
    if(top1== N-1){
        printf("Overflow Condition\n");
    }
    else{
        top1++;
        stack1[top1] = x;
        count++;
    }
}
void pop1(){
    top1--;
}
void push2(int b){
    top2++;
    stack2[top2] = b;
}
void pop2(){
    top2--;
}
void push1(int a){
    top1++;
    stack1[top1] = a;
}
void dequeue(){
    int b,a;
    if(top1==-1){
        printf("UnderFlown Condition\n");
    }
    else{
        for(int i=top1;i>=0;i--){
            b = stack1[i];
            pop1();
            push2(b);
        }
        printf("The dequeue element from the queue is : %d\n",stack2[top2]);
        pop2();
        for(int i = top2;i>=0;i--){
            a = stack2[i];
            pop2();
            push1(a);
        }
        count--;
   }
}
void peek(){
    if(top1==-1){
        printf("Underflown Condition\n");
    }
    else{
        printf("The front element of the queue is : %d\n",stack1[0]);
    }
}
void display(){
    if(top1==-1){
        printf("Underflown Condition\n");
    }
    else{
        printf("The elements in the queue are => ");
        for(int i=0;i<=top1;i++){
            printf("%d ",stack1[i]);
        }
        printf("\n");
    }
}
int main(){
    int choice,n;
    do{
        printf("Press 0 for : exit\n");
        printf("Press 1 for : Enqueue\n");
        printf("Press 2 for : Dequeue\n");
        printf("Press 3 for : peek\n");
        printf("Press 4 for : display\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 0 :
                break;
            case 1:
                printf("Enter the number : ");
                scanf("%d",&n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    }while(choice!=0);
    return 0;
}