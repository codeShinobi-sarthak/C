// A constructor in C++ is a special method that is automatically called 
// when an object of a class is created.
// To create a constructor, use the same name as the class, followed by parentheses ():



//  destructor  invoked automatically whenever an object is going to be destroyed.
// destructor is the last function that is going to be called before an object is destroyed.



#include <iostream>
using namespace std;

class rectangle {     // The class
  public:            // Access specifier
    
    int l;
    int b;

    rectangle() {     // Constructor(without arguments passed)
      l = 3;
      b = 5;
    }

    rectangle(int L, int B) {     // constructor(with arguments passed)
      l = L;
      b = B;
    }

    // rectangle(rectangle &r) {
    //   l = r.l;
    //   b = r.b;
    // }

    // ~rectangle() {
    //   cout << "destructor is called\n";
    // }
    

    // void result() {
    //   // cout << this->l*this->b;
    //   cout << "result";
    // }
};


int main() {
  rectangle r1;    // Create an object of MyClass (this will also call the constructor automatically)
  cout << "without arguments: " << r1.l << endl;

  rectangle r2(3, 4);
  cout << "with arguments: " << r2.l << endl;

  // rectangle r3 = r2;
  // cout << "copy constructor: " << r3.l << endl;

  return 0;
}