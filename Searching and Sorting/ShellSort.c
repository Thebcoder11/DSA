#include<stdio.h>
int n;
void print(int arr[],int  b){
    printf("The Array is : => ");
    for(int i=0;i<b;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}
void ShellSort(int arr[], int c){
    int d = c/2;
    for(int gap=d; gap>=1; gap=gap/2){
        for(int j = gap; j<=c-1;j++){
            for(int i=j-gap;i>=0;i=i-gap){
                if(arr[i+gap]<arr[i]){
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
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d position : ",i+1);
        scanf("%d",&arr[i]);
    }
    print(arr,n);
    ShellSort(arr,n);
    printf("After Sort \n");
    print(arr,n);
    return 0;
}