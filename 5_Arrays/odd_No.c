#include <stdio.h>

int countOdd(int arr[], int n){
    int count = 0;

    for (int i = 0; i<n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d \n", arr[i]);
            count++;
        }       
    }
    printf("No of Odd Numbers in array are : %d", count);
}

int main(){
    int arr[] = {45, 76, 42, 65};

    countOdd(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}