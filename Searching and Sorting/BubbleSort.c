#include<stdio.h>
int n;
int print(int arr[n]){
    printf("The Elements in the array => ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void BinarySort(int arr[n]){
    int flag,temp;
    for(int i=0;i<n-1;i++){
        flag =0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}
int main(){
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d position : ",i+1);
        scanf("%d",&arr[i]);
    }
    print(arr);
    BinarySort(arr);
    printf("After Sorting \n");
    print(arr);
    return 0;
}