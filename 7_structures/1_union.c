// The Union is a user-defined data type in C language that can contain elements of the different data types just like structure. 
// But unlike structures, all the members in the C union are stored in the same memory location. 
// Due to this, only one member can store data at the given instance.
#include <stdio.h>
#include <string.h>

typedef union student
{
    int age;
    char name[50];
    float cgpa;
} st;

int main(){
    union student s1;

// only one member can contain some value at a given instance of time
    s1.age = 20;
    // s1.cgpa = 6.4;
    // strcpy(s1.name, "sarthak");

// if you initialize value for all like above then only 
// the last one will get the value by default
    printf("%d\n", s1.age);
    // printf("%f\n", s1.cgpa);
    // printf("%s\n", s1.name);

    return 0;
}