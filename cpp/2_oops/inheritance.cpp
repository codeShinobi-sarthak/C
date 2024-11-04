#include <iostream>
using namespace std;

// base class
class youtube
{
private: // this is default
    int subscribers;

public:
    string name;

protected: 
    string owner_name;    
};

// derived class
class cookingyoutube : public youtube
{
    // name will be public
    // owner_name will be protected
    // subscribers will not be accessable
};

class educationyoutube : private youtube
{
    // name will be private
    // owner_name will be protected
    // subscribers will not be accessable
};

class techyoutube : protected youtube
{
    // name will be protected
    // owner_name will be protected
    // subscribers will not be accessable
};



int main()
{

    cookingyoutube channel1("sarthak");

    cout << channel1.ownername;
    return 0;
}