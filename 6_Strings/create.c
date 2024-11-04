#include <stdio.h>

int main(){
    // both ate correct way to declare string
    char firstName = "sarthak";
    char lastName[] = {'j', 'a', 'i', 'n', '\0'};

    printf("%s %s\n", firstName, lastName);

    for (int i = 0; firstName[i] != '\0'; i++)
    {
        printf("%c", firstName[i]);
    }
    
}