#include <stdio.h>

int main(){
    int age = 20;
    int *ptr = &age;

    int _age = 23;
    int *_ptr = &_age;

// both the printf print the same address 
//     printf("%p\n", &age);
//     printf("%p\n", ptr);

    printf("difference: %d\n", ptr-_ptr);
    printf("comparison: %d\n", _ptr==ptr); //return 0 as it is false 

    printf("%p\n", ptr); 
    ptr++;
    printf("%p\n", ptr); //value after adding pointer by 1(means 4)

    return 0;
}