#include<iostream>
#include<string>
using namespace std;


int main(){

    struct mystructure{
        int number ;
        string name ;

        /* data */
    }ms;
    
// also write as - mystructure ms;

    ms.number = 7;
    ms.name = "sarthak";

    cout << ms.name;

    /*
    

    struct {
        int number ;
        string name ;

        
    }mystructure;
    
    mystructure.number = 7;
    mystructure.name = "sarthak";

    cout << mystructure.name;
    

-can also make multiple structures in same struct
    
     struct 
    {
        int number ;
        string name ;

    }mystructure1, mystructure2, mystructure3 ;

    */

}
