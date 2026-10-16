#include<stdio.h>
#define N 15
int arr[N];
int cridx = 0;
void insert(int arr[],int value,int *a){
    if(*a>=N-1){
        printf("Heap is full\n");
    }
    else{
        *a = *a+1;
        arr[*a] = value;
        int i = *a;
        while(i>1){
            int parent = i/2;
            if(arr[i]<arr[parent]){
                int temp = arr[i];
                arr[i] = arr[parent];
                arr[parent] = temp;
                i = parent;
            }
            else{
                return;
            }
        }
    }
}
void delete(int arr[], int *a){
    if(*a==0){
        printf("Heap is Empty\n");
    }
    else if(*a==1){
        *a=*a-1;
    }
    else{
        int x = arr[1];
        arr[1] = arr[*a];
        arr[*a] = x;
        *a=*a-1;
        int idx = 1;
        while(idx<=*a){
            int i = idx;
            int smallest = idx;
            int left = (2*i);
            int right = (2*i)+1;
            if(left<=*a && arr[left]<arr[smallest]){
                smallest = left;
            }
            if(right<=*a && arr[right]<arr[smallest]){
                smallest = right;
            }
            if(smallest!=i){
                int temp = arr[i];
                arr[i] = arr[smallest];
                arr[smallest] = temp;
                idx = smallest;
            }
            else{
                break;
            }
        }
    }
}
void print(int arr[]){
    printf("The array is => ");
    for(int i=1;i<=cridx;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int a=1;
    while(a==1 || a==-1){
        printf("Press 1 : Insertion , Press -1 : Deletion ,Press 0 : Printing => ");
        scanf("%d",&a);
        if(a==1){
            int value;
            printf("Enter Value : ");
            scanf("%d",&value);
            insert(arr,value,&cridx);
        }
        else if(a==-1){
            delete(arr,&cridx);
        }
        else{
            print(arr);
        }
    }
    return 0;
}