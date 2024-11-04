#include <stdio.h>

int main(){

    // multi-dimentional array 
    // int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    // printf("%d\n", a[0][2]); //print element 


    

    int arr[4] ={1, 2, 3, 4};

    //below both the statements are same as array is a pointer in inself 
    // int *ptr = arr;
    // int *ptr = &arr[0];


    printf("%p\n", arr); // hear out show the address of the first element in the array hence array is a pointer in itself
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);

    // printing array element
    printf("%d\n", *(arr+2)); // here * is important as array is a pointer in itself
    printf("%d", *(arr)); // here * is important as array is a pointer in itself

}