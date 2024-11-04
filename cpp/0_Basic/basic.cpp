#include <iostream>
using namespace std;

/*
using namespace std; 
 
The using namespace std line can be omitted and
 replaced with the std keyword, followed
 by the :: operator for some objects
*/

int main(){
    cout<<"hello world\n";
    

    int num[4] = {1, 2, 3, 4};
    cout << sizeof(num) << "\n";
    int getArrayLength =sizeof(num) / sizeof(int);
    cout << getArrayLength;

/*It is because the sizeof() operator returns the size of a type in bytes.

     You learned from the Data Types chapter that an int type is usually
     4 bytes, so from the example above,
4 x 5 (4 bytes x 5 elements) = 20 bytes. */

     // you can use multidementional arrays

     int nums[4][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4}
     };
}