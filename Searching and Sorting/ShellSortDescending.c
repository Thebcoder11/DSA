#include<stdio.h>
void print(int arr[], int a){
    printf("The array is => ");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void ShellSort(int arr[], int n){
    for(int gap = n/2;gap>=1;gap=gap/2){
        for(int j=gap ; j<n;j++){
            for(int i = j-gap;i>=0;i=i-gap){
                if(arr[i]<arr[i+gap]){
                    int temp = arr[i];
                    arr[i] = arr[i+gap];
                    arr[i+gap] = temp;
                }
                else{
                    break;
                }
            }
        }
    }
    return;
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
    printf("The Sorted Array \n");
    ShellSort(arr,n);
    print(arr,n);
    return 0;
}