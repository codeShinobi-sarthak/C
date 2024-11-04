/* The Fibonacci sequence is a sequence 
where the next term is the sum of the previous two terms. 
The first two terms of the Fibonacci sequence are 0 followed by 1. */

#include <stdio.h>

int main(){

    int n;

    printf("Enter value of n (n>2): ");
    scanf("%d", &n);
    
    int fib[n];
    fib[0]= 0;
    fib[1]= 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]); 
    }

   return 0;
}