//  using typedef to shorter the name of mainly structures but can be use with others also  
#include <stdio.h>
#include <string.h>

// define structure using typedef
typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} stu; // basically student === stu (use stu for short insted of student) 
       // use of typedef 
 
int main(){
    stu s1; //

    s1.roll = 5445;
    s1.cgpa = 7.5;

    printf("roll no: %d", s1.roll);
}