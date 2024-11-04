#include <stdio.h>
#include <string.h>

int main(){
    char name_1[50];
    fgets(name_1, 50, stdin);
    char name_2[50];
    fgets(name_2, 50, stdin);

    // copy value of name_2 to name_1
    strcpy(name_1, name_2);
    puts(name_1);
    puts(name_2); 


 /*    // concatinating name_1 to name_2
    strcat(name_1, name_2);
    puts(name_1);
    puts(name_2);
 */

/*     // comparing 2 strings with ASCII values
    // reall life example can be dicnary
    printf("After comaparing: %d", strcmp(name_1, name_2));
 */

}