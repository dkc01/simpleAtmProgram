#include <iostream>

using namespace std;

int main()
{
    // menu
    // 1. check balance
    // 2. deposit money
    // 3. withdraw money
    // 4. exit
    
    
    // Constants
    
    
    // Variables 
    int option;
    int balance = 500;
    int depositAmt;
    int withdrawAmt;
    
    // Display menu
    cout << "**********Menu**********" << endl;
    cout << "1. check balance " << endl;
    cout << "2. deposit money " << endl;
    cout << "3. withdraw money " << endl;
    cout << "4. exit " << endl;
    cout << "************************" << endl;
    cout << endl;
    
    
    do 
    {
    // Choose options 
    cout << "Option: " << endl;
    cin >> option;
    cout << endl;
    
    switch( option )
    {
        case 1: cout << "available balance: " << balance << endl;
                break;
                
        case 2: cout << "Deposit amount: " << endl;
                cin >> depositAmt;
                balance += depositAmt;
                break;
                
        case 3: cout << "WithdrawAmt: " << endl;
                cin >> withdrawAmt;
                if( balance >= withdrawAmt)
                {
                    balance -= withdrawAmt;
                }
                else
                {
                    cout << "not enough money" << endl;
                }
                break;                
    }
    }while( option != 4);
    
    
    return 0;
}
