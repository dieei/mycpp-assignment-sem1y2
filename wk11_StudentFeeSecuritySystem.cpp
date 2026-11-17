/*
     STUDENT FEE SECURITY SYSTEM(encapsulation)
     STUDENT NAME : PATRICK NJUGUNA WANGUI
     REG NUMBER  : CT101/G/26598/25
 */

#include <iostream>
#include <string>
using namespace std;

class Student{
       private: 
           string studentName;
           string admNumber;
           float feeBalance;
        public:
           //takes student input
           void inputStudentData(){
               cout << "Enter student name: ";
               getline (cin >>ws, studentName);
               cout <<"Enter student admission number: ";
               getline (cin >> ws, admNumber);
               cout << "Enter student fee balance: ";
               cin >>feeBalance;
                                     }
              //reduces fee balance when payment is made
           void makePayment(){
                   float paying;
                         cout << "Enter amount being paid: ";
                         cin >>paying;
                         feeBalance -= paying;
           }
           void displayStatus(){
             cout << "\n\n________________________________________\n";
               cout << "STUDENT NAME:            "<<studentName<<"\n"
                    << "STUDENT ADMISSION NUMBER: "<<admNumber<<"\n"
                    << "REMAINING BALANCE:       " << feeBalance <<endl;
                     
           }

};

int main (void){
    Student student1;

    student1.inputStudentData();
    student1.makePayment();
    student1.displayStatus();

  return 0;
}
