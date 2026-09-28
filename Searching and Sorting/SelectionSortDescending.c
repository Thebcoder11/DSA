#include<stdio.h>
int n;
void print(int arr[n]){
    printf("The Array is : => ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void SelectionSortDescending(int arr[n]){
    for(int i=0;i<n-1;i++){
        int temp,max = i;
        for(int j=i+1;j<n;j++){
            if(arr[max]<arr[j]){
                max = j;
            }
        }
        if(max!=i){
            temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
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
    SelectionSortDescending(arr);
    printf("The Sorted array in descending order \n");
    print(arr);
    return 0;
}