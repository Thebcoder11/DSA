#include<stdio.h>
int main(){
    int arr[20];
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    if(20<size){
        printf("Overflow Condition ");
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
        int pos,num;
        printf("Enter the position : ");
        scanf("%d",&pos);
        printf("Enter the number : ");
        scanf("%d",&num);
        if(pos<=0 || pos>size+1){
            printf("Invalid position");
        }
        arr[size] = arr[pos-1];
        arr[pos-1] = num;
        size++;
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
// here time complexity will be O(1)
// as this is unsorted array