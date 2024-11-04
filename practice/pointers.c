#include <stdio.h>
    // * means value of and & means address of 
    //  %p is used to print the address of variable
    //  to print address we must use the %p not %d 
    // %d is used to porint the value of integer 

int main()
{
    int age = 20;
    int *ptr = &age;
    int _age = *ptr;

 
    printf("%d \n", age); // value of age
    printf("%p \n", &age); // address of age
    printf("%p \n", ptr); // address of age
    printf("%d \n", *ptr); // value of age as we add * before ptr

    printf("%p \n", &ptr); // print address of pointer 

    printf("%d \n", _age); 


    //pointer to pointer

    // int i = 5;
    // int *ptr = &i;
    // int **pptr = &ptr;

    // printf("%d \n", **pptr); //printf the value of i
}