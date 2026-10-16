#include<stdio.h>
#define N 15
int arr[N];
int a;
void print(int arr[],int *b){
    printf("The array is => ");
    for(int i=1;i<=*b;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void heapify(int arr[], int *c, int i){
    int largest = i;
    int left = (2*i);
    int right = (2*i)+1;
    if(left<=*c && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<=*c && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest != i){
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr,c,largest);
    }
    else{
        return;
    }
}

void MaxHeap(int arr[], int *a){
    int z = *a;
    for(int i = z/2 ;i>=1;i--){
        heapify(arr,a,i);
    }
}
void deletion(int arr[], int *d){
    if(*d==0){
        printf("Heap is Empty\n");
    }
    else if(*d ==1){
        *d = *d-1;
    }
    else{
        int x = arr[1];
        arr[1] = arr[*d];
        arr[*d] = x;
        *d = *d-1;
        heapify(arr,d,1);
    }
}
int main(){
    printf("Enter number of elements you want to put in the array : ");
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        printf("Enter the elemnet at %d position : ",i);
        scanf("%d",&arr[i]);
    }
    MaxHeap(arr,&a);
    print(arr,&a);
    int g = 1;
    while(g==1){
        printf("Press 1 if you want to delete : ");
        scanf("%d",&g);
        if(g==1){
            deletion(arr,&a);
        }
        else{
            print(arr,&a);
        }
    }
    print(arr,&a);
    return 0;
}