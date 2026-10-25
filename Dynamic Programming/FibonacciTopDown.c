#include<stdio.h>
int fibo(int n, int arr[]){
    if(n<0){
        printf("Invalid Input\n");
    }
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(arr[n]!=-1){
        return arr[n];
    }
    else{
        arr[n] = fibo(n-1,arr)+fibo(n-2,arr);
        return arr[n];
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=-1;
    }

    printf("The fibonacci number of %d is : %d",n,fibo(n,arr));
    return 0;
}