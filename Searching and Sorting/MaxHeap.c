#include<stdio.h>
#define N 20
int arr[20];
int cridx = 0;
void insert(int arr[],int value, int *a){
    if(*a>=N-1){
        printf("Heap is Full\n");
    }
    else{
        *a = *a+1;
        arr[*a] = value;
        int i = *a;
        while(i>1){
            int parent = i/2;
            if(arr[parent]<arr[i]){
                int temp = arr[parent];
                arr[parent] = arr[i];
                arr[i] = temp;
                i = parent;
            }
            else{
                return;
            }
        }
    }
}
void deletion(int arr[], int *a){
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
        *a = *a -1;
        int idx = 1;
        while(idx<=*a){
            int i = idx;
            int largest = idx;
            int left = 2*i;
            int right = (2*i)+1;
            if(left<=*a && arr[largest]<arr[left]){
                largest = left;
            }
            if(right<=*a && arr[largest]<arr[right]){
                largest = right;
            }
            if(i!=largest){
                int temp = arr[i];
                arr[i] = arr[largest];
                arr[largest] = temp;
                idx = largest;
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
    int a =1;
    while(a==1){
        printf("Press 1 : Insertion , Press -1 : deletion => ");
        scanf("%d",&a);
        if(a==1){
            int value;
            printf("Enter the value : ");
            scanf("%d",&value);
            insert(arr,value,&cridx);
        }
        else if(a==-1){
            deletion(arr,&cridx);
        }
        else{
            return 0;
        }
    }
    print(arr);
    return 0;
}