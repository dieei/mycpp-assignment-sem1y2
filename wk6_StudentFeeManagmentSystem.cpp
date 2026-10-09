/*
      STUDENT FEE MANAGMENT SYSTEM(classes and objects)
      STUDENT NAME:    PATRICK NJUGUNA WANGUI
      REGESTRATION NO: CT101/G/26598/25

 */

#include<iostream>
#include<string>

using namespace std;
class Student{
    public:
      string Sname;
      int admissionNo;
      float feeBalance, payed;

     //user input
      void inputStudent(){
           cout << "Enter student name: ";
           getline(cin >> ws, Sname);
           
           cout << "Enter student admission number: ";
           cin >> admissionNo;

           cout << "Enter student fee balance: ";
           cin >> feeBalance;
      }
      void makePayment(){
          cout << "Enter the amout you wish to pay: ";
          cin >> payed;
          //cheking if the amount paid is valid and calculating the balance
          if(payed > 0){
              if(payed <= feeBalance){
          feeBalance -=payed;
          cout << "Payment made succefully!\nNew balance: "<<feeBalance<<endl;
              }
              else{
                  //calculates the change fee
                  float overdraft = payed - feeBalance;   
                  feeBalance = 0;
                cout << "Payment made succefully!\nOverDraft: "<<overdraft<<endl;

              }
           }
          else{
             cout << "Enter a valid amount!"<<endl;
          }
          
      } 
      void displayStatus(){
          cout << "\n***** STUDENT-DETAILS *****\n";
          cout << "Name:              "<<Sname<<endl;
          cout << "Admission number:  "<<admissionNo<<endl;
          cout << "FeeBalance         "<<feeBalance<<endl;
          cout << "Payed:             "<<payed<<endl;
          
      }
};
int main(){
   
     Student Student1;
     cout << "\n----FEE MANAGEMENT SYSTEM----\n";
     Student1.inputStudent();
     Student1.makePayment();
     Student1.displayStatus();

  
  return 0;
 }

























