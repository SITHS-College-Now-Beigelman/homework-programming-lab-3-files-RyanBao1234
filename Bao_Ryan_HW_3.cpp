//Ryan Bao
//Homework 3
//10/15/2024

#include <iostream>                                                          //Use std for ease of coding
#include<iomanip>
#include <fstream>
#include <string>
using namespace std;                                                 //std for ease of coding

int main()   
{                                                                 //initialize main
/*
PART 1
PART 1 
PART 1
    ifstream transactions;                                        
    transactions.open("transactions.txt"); 
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << setfill('.');

    float starting_balance;
    string type_transactions;
    float amount_change;
    float deposits;
    float withdrawals;

    transactions >> starting_balance;
    cout << "STARTING BALANCE: $ " << starting_balance << endl;
    cout << "TYPE......AMOUNT....................BALANCE" << endl;
    cout << endl;

    for (int i = 0; i < 7; i += 1)                                                                        //Use for statement using i and # of transactions
    {
        transactions >> type_transactions >> amount_change;
        if (type_transactions == "W")                                                                      //Two scenarios for if statements
            cout << type_transactions << setw(15) << amount_change << setw(27) << (starting_balance -= amount_change) << endl;
            withdrawals += amount_change;
        if (type_transactions == "D")
            cout << type_transactions << setw(15) << amount_change << setw(27) << (starting_balance += amount_change) << endl;
            deposits += amount_change;
    }

    cout << endl;
    cout << "ENDING BALANCE: $" << starting_balance << endl;
    cout << "TOTAL WITHDRAWALS: $" << withdrawals << endl;
    cout << "TOTAL DEPOSITS: $" << deposits << endl;

return 0;
}


STARTING BALANCE: $ 5000.00
TYPE......AMOUNT....................BALANCE

W.........200.00....................4800.00
W.........800.00....................4000.00
W..........40.00....................3960.00
D..........90.00....................4050.00
D.........100.00....................4150.00
D........1000.00....................5150.00
W..........20.00....................5130.00

ENDING BALANCE: $5130.00
TOTAL WITHDRAWALS: $2250.00
TOTAL DEPOSITS: $2250.00
*/

//PART 2
//PART 2
//PART 2
    ifstream transactions;   
    ofstream outData;                                     
    transactions.open("transactions.txt"); 
    outData.open("outData.txt");
    outData << fixed << showpoint;
    outData << setprecision(2);
    outData << setfill('.');

    float starting_balance;
    string type_transactions;
    float amount_change;
    float deposits;
    float withdrawals;

    transactions >> starting_balance;
    outData << "STARTING BALANCE: $ " << starting_balance << endl;
    outData << "TYPE......AMOUNT....................BALANCE" << endl;
    outData << endl;

    while (!transactions.eof())                                                                                                  //while loop for eof
    {
        transactions >> type_transactions >> amount_change;
        if (type_transactions == "W")                                                                      //Two scenarios for if statements
            outData << type_transactions << setw(15) << amount_change << setw(27) << (starting_balance -= amount_change) << endl;
            withdrawals += amount_change;
        if (type_transactions == "D")
            outData << type_transactions << setw(15) << amount_change << setw(27) << (starting_balance += amount_change) << endl;
            deposits += amount_change;
    }

    outData << endl;
    outData << "ENDING BALANCE: $" << starting_balance << endl;
    outData << "TOTAL WITHDRAWALS: $" << withdrawals << endl;
    outData << "TOTAL DEPOSITS: $" << deposits << endl;

    transactions.close();
    outData.close();

return 0;
}


/*
STARTING BALANCE: $ 5000.00
TYPE......AMOUNT....................BALANCE

W.........200.00....................4800.00
W.........800.00....................4000.00
W..........40.00....................3960.00
D..........90.00....................4050.00
D.........100.00....................4150.00
D........1000.00....................5150.00
W..........20.00....................5130.00

ENDING BALANCE: $5130.00
TOTAL WITHDRAWALS: $2250.00
TOTAL DEPOSITS: $2250.00
*/



