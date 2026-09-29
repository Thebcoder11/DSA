#include<stdio.h>
int n;
int partition(int arr[n],int lb, int ub){
    int start = lb;
    int end = ub;
    int pivot = arr[lb];
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            int temp;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp ;
    temp = arr[end];
    arr[end] = arr[lb];
    arr[lb] = temp;
    return end;
}
void quicksort(int arr[n],int lb,int ub){
    if(lb<ub){
        int loc = partition(arr,lb,ub);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);
    }
}
void print(int arr[n]){
    printf("The array is => ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
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
    quicksort(arr,0,n-1);
    printf("The Sorted array \n");
    print(arr);
}