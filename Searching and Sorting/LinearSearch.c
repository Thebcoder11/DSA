#include<stdio.h>
int main(){
    int n;
    printf("Enter The size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d position : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The Elements in the array are : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int data,flag =0;
    printf("Enter the data you want to find in the array : ");
    scanf("%d",&data);
    for(int i=0;i<n;i++){
        if(arr[i]==data){
            printf("%d found at position : %d",data,i+1);
            flag =1;
            break;
        }
    }
    if(flag == 0){
        printf("%d not found in the given array ",data);
    }
    return 0;
}