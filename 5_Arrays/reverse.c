#include <stdio.h>

void reverse_array(int arr[], int n);
void print_array(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    printf("Before reversing array : ");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d, ", arr[i]);
    }

    reverse_array(arr, sizeof(arr) / sizeof(arr[0]));
    print_array(arr, sizeof(arr) / sizeof(arr[0]));
}

void reverse_array(int arr[], int n)
{
    int count = n / 2;
    for (int i = 0; i < count; i++)
    {
        int change = arr[i];
        arr[i] = arr[n - 1];
        arr[n - 1] = change;

        // printf("%d\n", arr[i]);
        // printf("%d\n", arr[n - 1]);
        n--;
    }
}

void print_array(int arr[], int n)
{
    printf("\nAfter reversing array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
}