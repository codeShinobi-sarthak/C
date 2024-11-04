#include <iostream>
#include<string>
using namespace std;

int main(){
    string first = "sathak ";
    string last = "jain";

    string full = first + last;
    string full2 = first.append(last);

    cout << full<< endl;
    cout << full2;

}
