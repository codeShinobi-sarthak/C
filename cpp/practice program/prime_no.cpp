#include <iostream>
using namespace std;

bool IsPrimeNumber(int number){
      bool IsPrime = true;
    for(int i = 2; i < number; i++){

        if ( number % i == 0) {
            return false;
                                                  //    IsPrime = false;
                                                   //    break;
        }
        
    }
    return true;
}

int main(){

// printing prime numbers 

    for (int i = 1; i < 10; i++){

        bool IsPrime =  IsPrimeNumber(i);

        if(IsPrime){
            cout<< i << ", ";
        }

    }
    


    
 /*
 checking if no is prime or not 

    int number;
    cout<< "enter your number = ";
    cin >> number;

    bool IsPrime = IsPrimeNumber(number);

    if(IsPrime){
        cout<< "prime number";
    }else
        cout<< "not prime number";
*/

}