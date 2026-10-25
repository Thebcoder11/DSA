#include<stdio.h>
int fibo(int n){
    if(n<0){
        printf("Invalid Input\n");
    }
    if(n==0||n==1){
        return n;
    }
    int prev1=0;
    int prev2=1;
    int current;
    for(int i=2;i<=n;i++){
        current = prev1+prev2;
        prev1=prev2;
        prev2=current;
    }
    return prev2;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The fibonacci of %d is : %d ",n,fibo(n));
    return 0;
}