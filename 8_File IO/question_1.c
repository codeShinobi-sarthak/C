// program to input student information from a user and enter it to file 
#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("student name: ");
    scanf("%s", name);
    printf("student age: ");
    scanf("%d", &age);
    printf("student cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name : %s\n", name);
    fprintf(fptr, "student age: %d\n", age);
    fprintf(fptr, "student cgpa: %f\n", cgpa);

    // fputc("name", fptr);
    // fputc("age", fptr);
    // fputc("cgpa", fptr);

    // fclose("student.txt");
    return 0;
}