#include <stdio.h>

int main(){
    int  x;

    printf("enter the value: ");
    scanf("%d", &x);

    for(int i = 1; i<= 10; i++){
        printf("%d * %d = %d\n",x, i, x*i );
    }
    return 0;
}