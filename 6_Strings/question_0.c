// make a program that inputs users name nad prints its length using function

#include <stdio.h>
#include <string.h> // using string header file


// using function to count sting characters
int count_length(char name[]){
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    return --length;
}

int main(){
    char name[50];
    fgets(name, 50, stdin);
    puts(name);

    // printf("length of name is :%d", count_length(name));

    // using build in functions in string header file
    printf("length of name is :%d", strlen(name));

}