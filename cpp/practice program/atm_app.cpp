#include <iostream>
using namespace std;

void showmenu(){
    cout << "******************MENU******************" << endl;
    cout<< "check balance"<< endl;
    cout<< "deposite"<< endl;
    cout<< "withdraw" << endl;
    cout<< "EXIT" << endl;
}

int main(){
    //check balance, deposite, withdrawl, show menu

    double balance = 500;
    int option;

    

do{
    showmenu();
    cout<< endl <<"choose option: ";
    cin >> option;
    
        switch (option) {
    case 1: cout<< "your balance: "<< balance << endl;    
    break;
    case 2: cout<< "deposite amount: ";   
        double depositeAmount;
        cin >> depositeAmount;
        balance += depositeAmount;
        break;
    case 3: cout<< "withdraw amount: ";   
        double withdrawAmount;
        cin >> withdrawAmount;
        if (withdrawAmount <= balance){
             balance -= withdrawAmount  ;
        }  else
          cout<< " not enough balance"<< endl;
        break;
    }
} while (option != 4);


}