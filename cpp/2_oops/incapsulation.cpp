// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
// To achieve this, you must declare class variables/attributes as private
// If you want others to read or modify the value of a private member,
// you can provide public get and set methods.

#include <iostream>
using namespace std;

class employee
{
private:
    string name;
    string gender;
    int salary;

public:
    // setter
    void setSalary(int s) {
        salary = s;
    }

    // getter - not void because it will return the value
    int getSalary() {
        return salary;
    }
};

int main()
{
    employee em1;
    
    em1.setSalary(5000);
    cout << em1.getSalary();
    return 0;
}