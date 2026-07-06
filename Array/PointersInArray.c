#include<stdio.h>
int main(){
    int a[5] ={1,2,3,4,5}; // compile time memory allocation
    int aa[] ={1,2,3,4,5,6}; // you can leave this empty compiler will automatically will assign the value

    // something about pointers 
    int b = 10;
    // here p is an pointer to a variable and that variable is of int type so data type of pointer is not int it is pointing to integer variable
    // as pointer can only store address and which is the address of another variable
    int *p = &b;
 
    // p = b; not allowed because you are storing a value in pointer data type you can only store the address of another variable
    // %p is the format specifier for pointers 
    printf("%p\n",p);
    printf("%p\n\n",&b);

    // and if you want to access that particular value

    printf("%d\n",b);
    printf("%d\n\n",*p); 
    //*p refer to address which is it is storing and then to value present at that particular address


    // now something about array 
    int c[] ={1,2,3,4,5};
    int *w = c; 
    // you can directly store this beacause array are also pointers they dont store the value they store the address
    printf("%p\n",c);
    printf("%p\n\n",w);

    // the address of c
    printf("%p\n",c);
    printf("%p\n\n",&c);

    // about pointers 

    printf("%p\n",w);
    printf("%p\n\n",&w);

    // acessing the element of the array 

    printf("%d\n",*a);
    printf("%d\n",c[0]);
    printf("%d\n\n",*w);

    // accessing with loops
    for(int i =0;i<5;i++){
        printf("%d ", *(a+i));
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ",*(w+i));
    }
    printf("\n");

    for(int i=0;i<5;i++){
        printf("%d ",i[w]);
    }
    printf("\n");
    
    for(int i=0;i<5;i++){
        printf("%d ",i[c]);
    }

    printf("\n");

    printf("%p\n",c+1); // address of next value in the array
    printf("%p\n\n",&c+1); // address after the array is completed

    // a particular value

    printf("%d\n",*(c+1));
    printf("%d\n",*c+1); // same output

    int d[5];
    int *v=a;
    for(int i=0;i<5;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&v[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",d[i]);
    }
    printf("\n");
    return 0;
}