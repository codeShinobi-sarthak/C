#include <iostream>
using namespace std;

class youtube
{
    /* ------ The public keyword is an access specifier.
            Access specifiers define how the members
            (attributes and methods) of a class can be accessed. -------- */
public:
    string name;
    int subscriber;
    string ownername;

    // ------------ using consctuctors ------------
    // Note: The constructor has the same name as the class, it is always public, and it does not have any return value.2

    youtube(string name1, int subscriber1, string ownername1)
    {
        name = name1;
        subscriber = subscriber1;
        ownername = ownername1;
    }

    // ------------ using meathords ------------
    // methods are basically functons that belongs to a particular class

    void info()
    {
        cout << name << endl;
        cout << subscriber << endl;
        cout << ownername << endl;
    }
};

// Method/function definition outside the class
// you can do the same for constructor functions also
void youtube::myMethod()
{
    // code
    cout << "myMethod";
}

int main()
{

    youtube channel("sarthaksanskari", 1203, "sarthak");
    channel.info();

    // multiple objects
    youtube channel1("wisdom classes", 1234, "somesh");
    channel1.info();

    // cout<<  channel.name << endl;
    // cout<<  channel.subscriber << endl;
    // cout<<  channel.ownername << endl;

    /*
    ----------- normal way -------------

        youtube channel;

        channel.name = "sarthaksanskari";
        channel.subscriber = 1000;
        channel.ownername = "sarthak";

        cout<<  channel.name << endl;
        cout<<  channel.subscriber << endl;
        cout<<  channel.ownername << endl;
    */
}

// static vs dynamic alocation
// youtube channel1;   (static alocation)
//  youtube 
