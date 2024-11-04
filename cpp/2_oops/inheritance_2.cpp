#include <iostream>
using namespace std;

// here it shows that parent class is called first

class parent_class
{
public:
    parent_class(/* args */)
    {
        cout << "parent class\n";
    };
};


//  multi inheritance (inherit multiple classes)
class parent_class2
{
public:
    parent_class2(/* args */)
    {
        cout << "parent class 2\n";
    };
};



//  child class 
// multi inheritance  
class child_class :public parent_class, public parent_class2
{
public:
    child_class()
    {
        cout << "child class\n";
    }
};

// multi-level inheritance
class grandchild_class :public child_class
{
public:
    grandchild_class()
    {
        cout << "grandchild class\n";
    }
};



int main()
{
    // single inheritance
    child_class c;

    // multi-level inheritance
    // grandchild_class g;
    return 0;
}