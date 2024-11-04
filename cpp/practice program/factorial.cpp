#include <iostream>
using namespace std;

int factorial(int number){

    if(number != 1){
        return number*factorial(number - 1);
    }
    

}

int main(){

    int number;
    cout<< "enter your number - ";
    cin>> number;

    cout << "sum = "<< factorial(number);
    

}