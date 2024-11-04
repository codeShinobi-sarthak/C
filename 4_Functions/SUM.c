#include <stdio.h>

int sum(int x, int y){
    printf("%d", x+y);
}

int main(){
    int a, b;

    printf("enter first no: ");
    scanf("%d", &a);
    printf("enter second no: ");
    scanf("%d", &b);
    
    int s = sum(a,b);
}