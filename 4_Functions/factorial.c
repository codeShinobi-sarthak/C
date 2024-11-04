#include <stdio.h>

int factorial(int x)
{
int num = 1;
    if (x == 0)
    {
        return 1;
    }

    for(int i = 1; i<=x; i++){
        num = num * i;
    }
    return num;
}

int main()
{
    int n;

    printf("Enter your no : ");
    scanf("%d", &n);

    printf("factorial is : %d", factorial(n));
    return 0;
}