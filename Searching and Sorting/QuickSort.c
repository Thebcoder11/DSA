#include<stdio.h>
int n;
void print(int arr[n]){
    printf("The array is => ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int partition(int arr[n],int lb,int ub){
    int start = lb;
    int end = ub;
    int pivot = arr[lb];
    while(start<end){
        while(start<=ub && arr[start]<=pivot){
            start++;
        }
        while(end>=lb && arr[end]>pivot){
            end--;
        }
        if(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp = arr[end];
    arr[end] = arr[lb];
    arr[lb]=temp;
    return end;
}
void QuickSort(int arr[n], int lb,int ub){
    if(lb<ub){
        int location = partition(arr,lb,ub);
        QuickSort(arr,lb,location-1);
        QuickSort(arr,location+1,ub);
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
    QuickSort(arr,0,n-1);
    printf("The Sorted Array is \n");
    print(arr);
}