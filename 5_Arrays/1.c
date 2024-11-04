// scanning value in array

#include <stdio.h>

int main(){
    float price[3];

    for(int i = 0; i < 3; i++){

        printf("Enter your price: ");
        scanf("%f", &price[i]);
        printf("price after GST: %f \n", price[i]+(0.18*price[i]));
    }
    printf("your total: %f\n", price[0]+price[1]+price[2]);

    return 0;
}