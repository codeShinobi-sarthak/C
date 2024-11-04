/*
call by value didnt change the default value of a and y 
but call by referance surely do
*/

/*
IMPORTANT POINT - call by value makes the copy of x and y 
and store them in new address
that means a and b will be having diffent address to that of x and y
*/


#include <stdio.h>

// call by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("AFTER SWAP : a = %d & b = %d\n", a, b);
}


// // call by reference
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("AFTER SWAP : a = %d & b = %d\n", *a, *b);
// }

int main(){
    int x = 5, y = 6;

    printf("x = %d & y = %d\n", x, y);
    swap(x,y);
    printf("value of x and y is not change : x = %d & y = %d\n", x, y);

    // printf("x = %d & y = %d\n", x, y);
    // swap(&x,&y);
    // printf("value of x and y also changes : x = %d & y = %d\n", x, y);

}