// use structyure to store vector and then make a function thst return their sum
#include <stdio.h>


struct vector {
    int x;
    int y;                                                                                                                                                                                                                                                                                                                                                                                                            
};

void vectorSum(struct vector V1, struct vector V2, struct vector result);

int main(){
    struct vector v1 = {5, 10};
    struct vector v2 = {10, 5};
    struct vector result = {0};

    vectorSum(v1, v2, result);
    return 0;
}


void vectorSum(struct vector V1, struct vector V2, struct vector result){
    result.x = V1.x + V2.x;
    result.y = V1.y + V2.y;

    printf("vector sum : %d + %d", result.x, result.y);
}