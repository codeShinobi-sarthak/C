// enem is a user defined data type of named innteger indentifiers
    // helps to make more readable code

#include <stdio.h>

// in enum by default value start with 0 (sun = 0)
enum Day{
    sun, mon, tue, wed, thu, fri, sat
};

int main(){

    enum Day today = sun; // this is how you access enums

    printf("%d", today);
    return 0;
}    