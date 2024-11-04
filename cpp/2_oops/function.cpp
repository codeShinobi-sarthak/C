// passing an array as function parametrs
#include <iostream>  
using namespace std; 

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}

// Note that when you call the function, you only need to use the name of the array when passing it as an argument 
// myFunction(myNumbers). However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).