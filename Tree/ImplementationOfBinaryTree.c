#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node{
    int data ;
    struct node * left;
    struct node * right;
};
struct node * create(){
    struct node * newnode;
    int a;
    printf("PRESS 1: create  PRESS -1: notcreate\n");
    printf("Enter your choice : ");
    scanf("%d",&a);
    if(a==1){
        newnode = (struct node *) malloc (sizeof(struct node));
        printf("Enter The data : ");
        scanf("%d",&newnode->data);
        printf("\n");
        count++;
        printf("The left node of :%d\n\n",newnode-> data);
        newnode->left = create();
        printf("The right node of :%d\n\n",newnode-> data);
        newnode->right = create();
        return newnode;
    }
    else if(a==-1){
        return 0;
    }
    else{
        printf("Invalid Input");
    }
}
int main(){
    struct node * root;
    root = 0;
    root = create();
    return 0;
}