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
        printf("Enter the position you want to delete : ");
        scanf("%d",&pos);
        
        if(pos<=0 || pos>size+1){
            printf("Invalid Position \n");
        }
        else{
            for(int i=pos-1;i<size-1;i++){
                arr[i] = arr[i+1]; 
            }
            size--;
        }
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}