//  enter addtress(house, block, city, state) of 5 people 
// now here comes the use of structures 
#include <stdio.h>
#include <string.h>

struct address{
    int houseNo;
    int block;
    char city[50];
    char state[50];
};

int main(){

/*     //  one way
    struct address(1, 2, 'meerut', 'uttar pradesh');
    struct address(1, 2, 'meerut', 'uttar pradesh');
    struct address(1, 2, 'meerut', 'uttar pradesh');
    struct address(1, 2, 'meerut', 'uttar pradesh');
    struct address(1, 2, 'meerut', 'uttar pradesh'); 
*/

    // second way (array of structures)
    struct address ad[5];
 
    ad[0].houseNo = 1;
    ad[0].block = 5;
    strcpy(ad[0].city, "meerut");
    strcpy(ad[0].state, "uttar pradesh");
// printing
    printf("city : %s\n", ad[0].city);

// you can scan them direstly like this 
    printf("enter info : ");
    scanf("%d", &ad[1].houseNo);
    scanf("%d", &ad[1].block);
    scanf("%s", ad[1].city);
    scanf("%s", ad[1].state);

}