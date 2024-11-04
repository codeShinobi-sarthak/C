 
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    // //traverse without using pointers
    //     for (int i = 0; i < sizeof(arr)/ sizeof(arr[0]) ; i++)
    //     {
    //         printf("Element at index %d : %d \n", i, arr[i]);
    //     }

    // traverse an array using pointers
    int *ptr = arr;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("Element at index %d : %d \n", i, *ptr);
        ptr++;
    }
}