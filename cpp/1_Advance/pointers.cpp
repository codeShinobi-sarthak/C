#include <iostream>
using namespace std;

void print(void* ptr, char type){
    switch (type) {
    case 'i': cout<< *((int*) ptr)<< endl;break;
    case 'c': cout<< *((char*) ptr)<< endl;break;
    }
}

int main(){
    // int a = 55;
    // cout<< &a<< endl;

    // int *ptr = &a ;
    // cout<< ptr<< endl;
    // cout<< *ptr;

    int number = 25;
    print(&number, 'i');
}