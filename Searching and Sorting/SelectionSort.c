#include<stdio.h>
int n;
void print(int arr[n]){
    printf("The array is => ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void SelectionSort(int arr[n]){
    for(int i=0;i<n-1;i++){
        int temp,min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        if(min!=i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
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
    SelectionSort(arr);
    printf("The Sorted Array \n");
    print(arr);
    return 0;
}