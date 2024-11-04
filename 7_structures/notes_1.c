//  array of structures
#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll_no;
    float cgpa;
};

//  function to structure 
void function(struct student maths)

int main(){
    struct student maths[100]; //array of structure

    maths[0].cgpa = 9.56;
    maths[0].roll_no = 9657;
    strcpy(maths[0].name, "sarthak");

    printf("cgpa : %f\n", maths[0].cgpa);
    printf("roll_no : %d\n", maths[0].roll_no);
    printf("name : %s\n", maths[0].name);
}