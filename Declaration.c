#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    int brr[5] ={11,22,33,44,55};
    // traversing 
    for(int i=0;i<5;i++){
        printf("%d ",brr[i]);
    }
    // intialization
    int crr[5];
    crr[0] = 20;
    crr[1] = 30;
    crr[2] = 40;
    crr[3] = 50;
    crr[4] = 60;
    // memory allocation
    // an array is always strored in continuous manner

    int drr[5];
    // size of int = 4 * arraysize = 4*5 = 20 bytes memory allocated
    // 1 byte has 8 bits
    // 20 * 8 = 160 bits
    return 0;
   
}