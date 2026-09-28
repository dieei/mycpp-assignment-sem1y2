/*
           PAYROLL SYSTEM 

       STUDENT NAME: PATRICK NJUGUNA
       REG NUMBER:    CT101/G/26598/25

*/
//the main goal of this project is access my memory on functions - using prior knowlage from c
#include<iostream>
#include<string>
using namespace std;
//prototypes
//using pass by reference to avoid copying values to the function
void getCustomerDetails(string &empName, float &basicSalary, float &overTime);
float calculateOvertimePay(float overTime, float ratePerHour);
float calculateNetSalary(float basicSalary, float overTimePay);
void diplayPayslip(string empName, float basicSalary, float overTime, float overTimePay, float netSalary);

int main() {
    string  name;
    float  overtime = 0, rate = 250.0, overpay = 0, bSalary = 0, nSalary = 0;

	// collec input from user
    getCustomerDetails(name, bSalary, overtime);
	//perfirms the calculations and assigns the values to the variable
    overpay = calculateOvertimePay(overtime, rate);
    nSalary = calculateNetSalary(bSalary, overpay);
	//output the results to the user
	cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++\n";
    diplayPayslip(name, bSalary, overtime, overpay, nSalary);

    return 0;
}

//actual code
void getCustomerDetails(string &empName, float &basicSalary, float &overTime) {

    cout << "Enter Employees name: ";
    getline(cin ,empName);

    cout << "Enter Employees basic salary: ";
    cin >> basicSalary;

    cout << "Enter employees overtime hours: ";
    cin >> overTime;

}
float calculateOvertimePay(float overTime, float ratePerHour) {
    float overTimepay = overTime * ratePerHour;
    return overTimepay;

}
float calculateNetSalary(float basicSalary, float overTimePay) {
    float netSalary = basicSalary + overTimePay;
    return netSalary;

}
void diplayPayslip(string empName, float basicSalary, float overTime, float overTimePay, float netSalary) {
    cout << "Employee name:           " << empName << "\n"
        << "Employee basic salary:   " << basicSalary << "\n"
        << "Employee overtime hours: " << overTime << "\n"
        << "Employee pvertime pay:   " << overTimePay << "\n\n"
        << "Employee net salary:     " << netSalary << endl;

}
