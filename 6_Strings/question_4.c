//write a function name slice whih takes a string input and return the sliced string (like from 3 to 6)

//there is an error in this question (change result length to 100 or 50)

#include <stdio.h>
#include <string.h>

void slice(char user_input[], int n, int m);

int main(){
    char user_input[100];
    scanf("%s", user_input);

    slice(user_input, 3, 6);
}

void slice(char user_input[], int n, int m){
    char result[100]; 
    int x = 0;

    for (int i = n; i <= m; i++, x++)
    {
            result[x] = user_input[i];
            // x++;
    }
    result[x] = '\0';
    puts(result);          
}