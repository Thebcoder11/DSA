#include<stdio.h>
int main(){
    int a[2][3]={1,2,3,4,5,6};
    int b[][4]={1,2,3,4,5,6,7,8,9,10,11,12}; 
    // first subscrpit can be empty but secind subscript is mandatory

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%p ",&b[i][j]);
        }
        printf("\n");
    }
    
    printf("%p\n",b); // pointer on 2d array first element
    printf("%p\n",*b); // pointer in 1d array 1st element
    printf("%p\n\n",&b[0][0]); // pointer on 1 element of 1d array and these all are same

    // access a particular value 



    printf("%d \n",*(*b+1)); // pointing to 0th row 1st element
    printf("%d \n",*(*(b+1))); // pointing on 1 row 1 element
    // here b+1 next row  
    // 1 2 3    0th row   = 1st element 
    // 4 5 6    1st row   = 2nd element
    // 7 8 9    2nd row   = 3rd element

    // how to point a pointer in 2d array


    int (*p)[4] =b;
    // this is an pointer to array of 4 integers

    printf("%d ",*(*(p+2))); // 2nd row 1st element

    return 0;
}