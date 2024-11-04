#include <iostream>
using namespace std;

int main(){
    int marks[4] = {1, 2, 3, 4};

    int* m = marks;

    cout<< *m++ << endl;
    cout<< (*++m) << endl;  

}