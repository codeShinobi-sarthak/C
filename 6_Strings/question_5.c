// check if the character is present in the string or not

#include <stdio.h>

void checkChar(char str[], char ch);

int main()
{
    // first declare string
    char str[100] = "hello world";
    // scanf("%s", str);

    checkChar(str, 'h');
}

void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("yes character is present");
            return;
        }
        else
        {
            printf("character is not found");
        }
    }
}