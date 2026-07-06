#include<stdio.h>
int main(){
    int a[2][3]; // this is called the two dimensinal array 
    int c[2]; // one dimensional array

    // 2D array is also called array of arrays or matrix
    
    // initialize an array
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element at (%d,%d) index : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("The input array \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // memory representation of array 
    // 1 row major
   

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("(%d ,%d) ",i,j);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%p ",&a[i][j]);
        }
        printf("\n");
    }

    // row major formula 
    // how many rows covered 
    // a[1][1] = Base + (i*n+j ) * size of int

    printf("a[1][1] = %p",(char *)&a[0][0] + ((1*3+1)*4));
    
    // if rows are started from 1 and column also 1

    printf("\n\n");
    int b[3][3];
    int d = 1;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            b[i][j] = d;
            d++;
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\nMemory representation\n");
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%p     ",&b[i][j]);
        }
        printf("\n");
    }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("(%d,%d) ",i,j);
        }
        printf("\n");
    }
    printf("\n");

    // address if array started from 1st column and 1st row

    printf("b[2][2] = %p\n",(char *)&b[1][1] + ((2-1)*3+(2-1))*sizeof(int));


    // column major formula
    // a[i][j] = base + (j*m + i )*sizeof(int);
    // if starting from 1row and 1 column
    // a[i][j] = base + (j-1*m +i)*sizeof(int);
   
    return 0;
}