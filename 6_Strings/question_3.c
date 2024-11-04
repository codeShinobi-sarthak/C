// salting passward (123 added at the user entered passward)

#include <stdio.h>
#include <string.h>

int main(){
    char passward[100];
    scanf("%s", passward);
    // fputs not working showing error
    // fputs(passward, 100, stdin);

    char salted_pass[] = "123";

    // char new_pass[100] = strcat(passward, salted_pass);
     printf("your salted passward is : %s", strcat(passward, salted_pass));
}