#include<stdio.h>
int MinCost(int cost[],int i, int n){
    if(i>n){
        return 0;
    }
    int a = cost[i]+MinCost(cost,i+1,n);
    int b = cost[i]+MinCost(cost,i+2,n);
    if(a<b){
        return a;
    }
    else{
        return b;
    }

}
int main(){
    int n;
    printf("Enter number of stairs : ");
    scanf("%d",&n);
    int cost[n];
    for(int i=1;i<=n;i++){
        printf("Enter the cost at %d position : ",i);
        scanf("%d",&cost[i]);
    }
    int c = MinCost(cost,1,n);
    int d = MinCost(cost,2,n);
    if(c<d){
        printf("%d",c);
    }
    else{
        printf("%d",d);
    }
    return 0;
}