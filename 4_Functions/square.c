#include <stdio.h>


int calculate(int n){
    return n*n;
}

int main(){
    int a;

    printf("enter your no : ");
    scanf("%d", &a);

    printf("square of the no is = %d", calculate(a));
    return 0;
}

