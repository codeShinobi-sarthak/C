// program that take user input and prints its lenght
// it will not need the spavce between multiple string 

#include <stdio.h>

int main(){
    char user_input[100];
    fgets(user_input, 100, stdin);

    int user_length = 0;

    for (int i = 0; user_input[i] != '\0'; i++)
    {
        if (user_input[i] == ' ')continue;    
        user_length++;   
    }
    puts(user_input);
    printf("length is: %d", --user_length);   
}