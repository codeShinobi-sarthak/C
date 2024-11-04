#include<iostream>
using namespace std;

int main(){
    
    int age;
    cout << "your age = ";
    cin >> age;

    if(age < 18){
        cout << "you can not apply\n";
    }else{
        cout << "you can apply\n";
    }


// switch case

    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;     // if there is no break after every case then it will print
    case 15:
        cout << "you are not 18"<< endl;    
        break;
    
    default: // this is a default case that will definately run
        cout << "this is default case\n";
        break;
    }
}