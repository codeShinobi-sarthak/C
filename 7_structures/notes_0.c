
// declaring basic structure

#include <stdio.h>
#include <string.h>

// user defined data type
struct student {
    // these are its properties
    char name[100];
    int rollNo;
    float cgpa;
};

int main(){
/*     you can make multiple students with deifferent names like s2 s3 etc
    thats the use of structure 
    here it benifits as we dont a want to write the same code multiple times 
    hence saves time and repetition of code and more makes work */
    struct student s1;

/*     // this is called initializing of structure
    struct student s1 = {4548, 5.4, "yo"}; */

    s1.cgpa = 9.5;
    s1.rollNo = 9285;
/*  you can not declare the name like this :-
    s1.name = "sarthak"
    because you know you can not change the string(char array) 
    unless defines like pointers 
    refer notes or google for revision if forget */
    strcpy(s1.name, "sarthak");

    printf("cgpa : %f\n", s1.cgpa);
    printf("rollNo : %d\n", s1.rollNo);
    printf("name : %s\n", s1.name);


    // pointer to structure
    struct student *ptr = &s1;
    printf("strudent roll no (pointers used) : %d\n", ptr->rollNo);
    printf("strudent roll no (pointers used)  : %d\n", (*ptr).rollNo);

    return 0;
}