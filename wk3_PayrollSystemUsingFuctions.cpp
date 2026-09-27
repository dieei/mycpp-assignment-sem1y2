/*
           PAYROLL SYSTEM 

       STUDENT NAME: PATRICK NJUGUNA
       REG NUMBER:    CT101/G/26598/25

*/
//the main goal of this project is access my memory on functions - using prior knowlage from c
#include<iostream>

using namespace std;
//prototypes
void getCustomerDetails(string empName, float basicSalary, int overTime);
float calculateOvertimePay(float overTime, float ratePerHour);
float calculateNetSalary(float basicSalary, float overTimePay);
float diplayPayslip(string empname, float basicSalary, float overTime, float overTimePay, float netSalary);

int main(){
     string  name;
     float salary, overtime, rate, overpay, bSalary, nSalary;
           
                 // i think i should assign variable names to this functions
           getCustomerDetails(name, bSalary, overtime);
           calculateOvertimePay(overtime, rate);
           calculateNetSalary(bSalary, overpay);
           diplayPayslip(name, bSalary, overtime, overpay, nSalary);
          
            
              return 0;
    }

//i think i should use pointers in this functions tho not sure if its necessary
void getCustomerDetails(string empName, float basicSalary, int overTime){
       
     cout<< "Enter Employees name: ";
     cin>>empname;
     
     cout<< "Enter Employees basic salary: ";
     cin >>basicSalary;

     cout<< "Enter employees overtime hours: ";
     cin >>overTime;

    }
float calculateOvertimePay(float overTime, float ratePerHour){
      float overTimepay = overTime * ratePerHour;
        return overTimepay;

    }
float calculateNetSalary(float basicSalary, float overTimePay){
         float netSalary = basicSalary + overTimePay;
         return netSalary;

    }
float diplayPayslip(string name, float basicSalary, float overTime, float overTimePay, float netSalary){
        cout<< "Employee name:           "<<name<<"\n"
            << "Employee basic salary:   "<<basicSalary<<"\n"
            << "Employee overtime hours: "<<overTime<<"\n"
            << "Employee pvertime pay:   "<<overTimePay<<"\n\n"
            << "Employee net salary:     "<<netSalary<<endl;

    }

