#include<stdio.h>
int main(){
    int arr[20];
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    if(20<size){
        printf("Overflow condition");
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
        int position,num;
        printf("Enter the position you want to add element : ");
        scanf("%d",&position);
        if(position<=0 || position>size+1){
            printf("Not possible\n");
        }
        
        else {
            printf("Enter the number you want to add : ");
            scanf("%d",&num);
            for(int i=size-1;i>=position-1;i--){
                arr[i+1]=arr[i];
            }
            size++;
            arr[position-1] = num;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}