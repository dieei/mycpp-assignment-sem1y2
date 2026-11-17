/*
      EMPLOYEE DATA PROTECTION SYSTEM (encapsulation)
      STUDENT NAME : PATRICK NJUGUNA WANGUI
      REG NUMBER   : CT101/G/26598/25
 */

#include <iostream>
#include <string>
using namespace std;

class Employee{
      private:
         string employeeName;
         string employeeId;
         double basicSalary;
      public:
         //get details
        void setEmployeeDetails(){
          cout << "Enter the employees name: ";
          getline(cin >> ws, employeeName);

          cout << "Enter the employees Id: ";
          getline(cin >> ws, employeeId);

          cout << "Enter the employees basic salary: ";
          cin >>basicSalary;
        }
               //calculate salary
        double calculateSalary(){
            return basicSalary + (0.10 * basicSalary);
                    }
        //display the details
        void displayEmployeeDetails(){
            cout << "\n\n----------------------------------------------\n";
             cout << "Employee name: "<<employeeName<<"\n"<<"Employee ID: "<<employeeId<<"\n"
             <<"Employee basic salary: "<<basicSalary<<"\n"<<"Employee net Salary: "<<calculateSalary()<<"\n"<<endl;
             
        }
       
};

int main(void){
        Employee Emp1;
   
        Emp1.setEmployeeDetails();
        Emp1.displayEmployeeDetails();
  
     return 0;
}

