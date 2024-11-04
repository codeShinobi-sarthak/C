#include <iostream>
using namespace std;

int fib(int n){
    if (n < 2){
        return 1;
    }
    return fib(n-2) + fib(n-1) ;
}

int main(){

    int a;
    cout << "enter number = ";
    cin >>a; 

    cout << "fibonachi series : "<< fib(a);
}