#include <iostream>
#include <iomanip>
using namespace std;


// not completed 



int main(){
    
int height, width;
char symbol;

    cout<< "height = ";
    cin>> height  ;

    cout<< "width = ";
    cin>> width ;

    cout<< "symbol = " ;
    cin>> symbol ;

    for (int h = 0; h < height; h++) {
        for ( int w = height - h; w > 0; w--)
              cout<< " " << symbol;  
        for (int j = 1; j <= h ; j++)
            cout<< symbol<< " ";                                 
        cout<< endl; 
    }
     

}