//  using macros and macro function 
#include <stdio.h>
# define PI 3.14159265359
# define area(r) (PI*r*r)

int main(){
    printf("%f\n", PI);
    printf("%.2f\n", area(5));
    return 0;
}