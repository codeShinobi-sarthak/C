// didnt get much 
//  should revise again
#include <iostream>
using namespace std;

class complex
{
public:
    int real;
    int img;

    complex() {
        real = 0;
        img = 0;
    }

    complex(int x, int y){
        real = x;
        img = y;
    }

    void print(){
        cout << real << "+" << img << "i\n";
    }

// operator overloading
    complex operator + (complex &c) {
        complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main(){
    complex c1(1, 2);
    complex c2(3, 4);
    complex c3;

    c3 = c1 + c2;
    c3.print();
}