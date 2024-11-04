//  program to insert a element in an array
#include <stdio.h>

int main(){
    int arr[5] = {1, 2 ,3};

    arr[3] = 4;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d element is %d\n", i, arr[i]);
    }
    
}