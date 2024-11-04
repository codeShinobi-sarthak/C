// call by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("AFTER SWAP : a = %d & b = %d\n", a, b);
}