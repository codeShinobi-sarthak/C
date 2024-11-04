// printing largerst no in an array
#include <stdio.h>

int main(){
    int arr[6] = {12, 34, 45, 72, 789, 333};
    int max = arr[0];

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("max val is : %d", max);
    
}