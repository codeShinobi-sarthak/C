// using fgetc and fputc
#include <stdio.h>

int main(){
    FILE *fptr;
    // opening a file
    // fptr = fopen("test.txt", "r"); // for reading r
    fptr = fopen("test.txt", "w"); // for writing w
    
    // printf("%c\n", fgetc(fptr));

    fputc('m', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('g', fptr);
    fputc('o', fptr);
    return 0;
}