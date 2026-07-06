#include<stdio.h>
int main(){
    int arr[20];
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    if(20<size){
        printf("Overflown Condition");
    }
    else{
        for(int i=0;i<size;i++){
            printf("Enter the element at %d index : ",i);
            scanf("%d",&arr[i]);
        }
        printf("The input array : ");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        int pos;
        printf("Enter the position you want to delete: ");
        scanf("%d",&pos);
        arr[pos-1] = arr[size-1];
        size--;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
