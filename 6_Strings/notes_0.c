#include <stdio.h>

int main(){
/*     // using gets which is outdated and dangerous and now it is not used
    char name[10];
    gets(name);
    puts(name); 
 */

/*     // using fgets(str, n, file)
    char name[50];
    fgets(name, 50, stdin);
    puts(name);
 */

    //  character pointer
    // string is also a pointer
    char *changeName = "sarthak jain";
    puts(changeName);
    changeName = "sarthaksanskari";
    puts(changeName);
}