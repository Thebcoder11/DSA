#include<stdio.h>
void print(int arr[], int a){
    for(int j=0;j<a;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}
void CountSort(int arr[], int n, int brr[]){
    int b = arr[0];
    // maximum value
    for(int i=1;i<n;i++){
        if(arr[i]>b){
            b=arr[i];
        }
    }
    // array of complete range
    int count[b+1];
    for(int i=0;i<=b;i++){
        count[i]=0;
    }
    // number occuring in the array
    for(int i=0;i<n;i++){
        ++count[arr[i]];
    }
    // update the count array with the address
    for(int i=1;i<=b;i++){
        count[i]=count[i]+count[i-1];
    }
    //creating an new array
    for(int i=n-1;i>=0;i--){
        brr[--count[arr[i]]]=arr[i];
    }
    // now changing the given array arr
    for(int i=0;i<n;i++){
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
}