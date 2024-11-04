#include <iostream>
using namespace std;

// Polymorphism means "many forms",
// and it occurs when we have many classes that are related to each other by inheritance.

class animal
{
private:
    /* data */
public:
    animal(/* args */){

    };

    void animal_sound()
    {
        cout << "animal sound\n";
    }
};

class pig : public animal
{
public:
    animal_sound()
    {
        cout << "animal sound wee wee..\n";
    }
};

class dog : public animal
{
public:
    animal_sound()
    {
        cout << "animal sound bow bow..\n";
    }
};

int main()
{
    animal myAnimal;
    pig mypig;
    dog mydog;

    myAnimal.animal_sound();
    mypig.animal_sound();
    mydog.animal_sound();
}