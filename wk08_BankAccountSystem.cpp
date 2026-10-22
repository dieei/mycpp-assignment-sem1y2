/*
       BANK ACCOUNT SYSTEM (co`nstractors and destroctors)
       STUDENT NAME :   PATRICK NJUGUNA WANGUI
       REGESTRATION NO: CT101/G/26598/25
*/

#include<iostream>
#include<string>

using namespace std;

class BankAccount{
    private:
   string holderName;
   int accountNumber;
   int accountBalance;
    public:
   //constructor
   BankAccount(string hName, int acNumber, int acBalance){
                holderName = hName;
                accountNumber = acNumber;
                accountBalance = acBalance;
                cout << "\nAccount successfully created"<<endl;
   }
        //displays user bank info
   void displayAccount(){
         cout <<"Holders name: "<<holderName<<"\nAccount Number: "<<accountNumber<<"\nAcount Balance: "<<accountBalance<<endl;
   }

        //destructor
   ~BankAccount(){
      cout << "\n----Account closed succesfully----"<<endl;
   }
};


int main(){
     
      BankAccount user1("Patrick", 12345, 5000);
      user1.displayAccount();
    
      return 0;
}












