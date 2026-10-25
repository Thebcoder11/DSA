#include<stdio.h>
int stairs(int n){
    if(n<0){
        printf("Invalid input");
        return 0;
    }
    int arr[n+1];
    arr[1]=1;
    arr[2]=2;
    if(n==1||n==2){
        return n;
    }
    for(int i=3;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}
int main(){
    int n;
    printf("Enter number of stairs : ");
    scanf("%d",&n);
    printf("The total number of ways to climb %d stairs are : %d ",n,stairs(n));
    return 0;
}