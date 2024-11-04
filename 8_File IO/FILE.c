#include <stdio.h>

int main()
{

    FILE *fptr;
    // opening a file
    fptr = fopen("test.txt", "r"); // for reading r
    // fptr = fopen("test.txt", "w"); // for writing w

/*     // good practice - to check if file really exists
    if (fptr == NULL)
    {
        printf("file doesnt exists\n");
    }
    else
    {
        // closing a file
        fclose(fptr);
    } */

    // reading from a file
    char ch; // can be any type like int etc 
    fscanf(fptr, "%c", &ch); // reading
    printf("character = %c\n", ch); // printing after reading

    // writing in a file
    fprintf(fptr, "%c", 's');

    fclose(fptr);

    return 0;
}

// some notes

/* file opening modes

"r" - open to read
"rb" - open to read in binary
"w" - open to write
"wb" - open to write in binary
"a" - open to append
 */