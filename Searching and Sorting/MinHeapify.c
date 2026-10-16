#include<stdio.h>
#define N 15
int arr[N];
int a;
void print(int arr[], int *b){
    printf("The array => ");
    for(int i=1;i<=*b;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void heapify(int arr[],int *c,int i){
    int smallest = i;
    int left = 2*i;
    int right = (2*i)+1;
    if(left<=*c && arr[left]<arr[smallest]){
        smallest = left;
    }
    if(right<=*c && arr[right]<arr[smallest]){
        smallest = right;
    }
    if(smallest!=i){
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        i = smallest;
        heapify(arr,c,i);
    }
    else{
        return;
    }
}
void Minheap(int arr[], int *d){
    int z = *d/2;
    for(int i=z;i>=1;i--){
        heapify(arr,d,i);
    }
}
void deletion(int arr[],int *f){
    if(*f==0){
        printf("Heap is Empty\n");
    }
    else if(*f==1){
        *f=*f-1;
    }
    else{
        int x = arr[1];
        arr[1] = arr[*f];
        arr[*f] = x;
        *f =*f-1;
        heapify(arr,f,1);
    }
}
int main(){
    printf("Enter how many number you want to input : ");
    scanf("%d",&a);
    if(a>=N-1){
        printf("Not enough space \n");
    }
    else{
        for(int i=1;i<=a;i++){
            printf("Enter the element at %d position : ",i);
            scanf("%d",&arr[i]);
        }
    }
    
    print(arr,&a);
    Minheap(arr,&a);
    int e=1;
    while(e==1){
        printf("Press 1 for deletion : ");
        scanf("%d",&e);
        if(e==1){
            deletion(arr,&a);
        }
    }
    print(arr,&a);
    return 0;
}