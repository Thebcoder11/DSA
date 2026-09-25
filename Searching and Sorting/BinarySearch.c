// array must be sorted
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d position : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements in the given array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int data,flag=0;
    printf("Enter the data : ");
    scanf("%d",&data);
    int l=0,r=n-1,mid;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==data){
            printf("Element found at %d position ",mid+1);
            flag = 1;
            break;
        }
        else if(arr[mid]<data){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(flag ==0){
        printf("%d not found in the array ",data);
    }
}