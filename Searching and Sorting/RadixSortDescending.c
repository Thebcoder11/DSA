#include<stdio.h>
void print(int arr[], int n){
    printf("The array is => ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void CountSort(int arr[], int n, int pos){
    int count[10] ={0};
    // number occurence
    for(int i=0;i<n;i++){
        ++count[(arr[i]/pos)%10];
    }
    // indexing in count
    for(int i=8;i>=0;i--){
        count[i]=count[i]+count[i+1];
    }
    // putting value in array
    int brr[n];
    for(int i=n-1;i>=0;i--){
        brr[--count[(arr[i]/pos)%10]]=arr[i];
    }
    // putting value in arr
    for(int i=0;i<n;i++){
        arr[i]=brr[i];
    }
}
void RadixSort(int arr[], int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int pos =1;max/pos>0;pos=pos*10){
        CountSort(arr,n,pos);
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
    print(arr,n);
    RadixSort(arr,n);
    printf("The Sorted Array \n");
    print(arr,n);
}