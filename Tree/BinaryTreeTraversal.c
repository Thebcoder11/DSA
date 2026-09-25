#include<stdio.h>
#include<stdlib.h>
int count = 0;
struct node {
    int data;
    struct node * left;
    struct node * right;
};
void preorder(struct node * root){
    if(root==0){
        return ;
    }
    else{
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node * root){
    if(root==0){
        return;
    }
    else{
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void postorder(struct node * root){
    if(root==0){
        return;
    }
    else{
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
struct node * create(){
    int a;
    struct node * newnode;
    printf("PRESS 1 : Create PRESS -1 : NotCreate\n");
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a==1){
        newnode = (struct node *) malloc(sizeof(struct node ));
        printf("Enter the data : ");
        scanf("%d",&newnode -> data);
        printf("\n");
        printf("The left node of : %d\n\n",newnode -> data);
        newnode -> left = create();
        printf("The right node of : %d\n\n",newnode ->data);
        newnode -> right = create();
        return newnode;
    }
    else if(a==-1){
        return 0;
    }
    else{
        printf("Invalid Input\n");
    }
}
int main(){
    struct node * root;
    root = 0;
    root = create();
    
    printf("The preorder is => ");
    preorder(root);
    printf("\n");
    printf("The Inorder is => ");
    inorder(root);
    printf("\n");
    printf("The post order is => ");
    postorder(root);
    printf("\n");
    return 0;
}