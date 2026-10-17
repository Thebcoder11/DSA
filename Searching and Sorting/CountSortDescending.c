#include<stdio.h>
void print(int arr[], int a){
    printf("The Array is => ");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void CountSort(int arr[], int a, int brr[]){
    // find maximum
    int max = arr[0];
    for(int i=1;i<a;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    // creating count array
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    // counting the occurence
    for(int i=0;i<a;i++){
        ++count[arr[i]];
    }
    // indexing in count array
    for(int i=max-1;i>=0;i--){
        count[i]=count[i]+count[i+1];
    }
    // putting the values in another array
    for(int i=a-1;i>=0;i--){
        brr[--count[arr[i]]] = arr[i];
    }
    // putting the values in orginal array
    for(int i=0;i<a;i++){
        arr[i]=brr[i];
    }
}
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d position : ",i+1);
        scanf("%d",&arr[i]);
    }
    int brr[n];
    print(arr,n);
    CountSort(arr,n,brr);
    printf("The Sorted Array \n");
    print(arr,n);
    return 0;
}