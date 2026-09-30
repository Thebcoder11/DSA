#include<stdio.h>
int n;
void print(int arr[n]){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void Merge(int arr[n], int lb, int mid , int ub){
    int i = lb;
    int j = mid+1;
    int k = lb;
    int brr[n];
    while(i<=mid && j<=ub){
        if(arr[i]>=arr[j]){
            brr[k] = arr[i];
            i++;
            k++;
        }
        else{
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        while(j<=ub){
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    if(j>ub){
        while(i<=mid){
            brr[k] = arr[i];
            i++;
            k++;
        }
    }
    for(int i=lb;i<=ub;i++){
        arr[i] = brr[i];
    }
}
void MergeSort(int arr[n], int lb, int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        MergeSort(arr,lb,mid);
        MergeSort(arr,mid+1,ub);
        Merge(arr,lb,mid,ub);
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
    MergeSort(arr,0,n-1);
    printf("The Sorted Array\n");
    print(arr);
    return 0;
}