// create a structure to store complex no (use arrow operator)
#include <stdio.h>

struct complexNo {
    int real;
    int img;
};

int main(){
    struct complexNo number1 = {5, 6};
    struct complexNo *ptr = &number1;

    printf("complex number is: %d + %di", ptr->real, ptr->img);
}