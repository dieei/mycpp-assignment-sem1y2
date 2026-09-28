/*
               WATER BILLING SYSTEM
        STUDENT NAME: PATRICK NJUGUNA WANGUI
        REG  NUMBER:  CT101/G/26598/25

*/
#include<iostream>
#include<string>

using namespace std;
//prototypes
void getCustomerDetails(string &cusName, float &unitsUsed);
float calculateBill(float unitsUsed, float ratePerUnit);
float applyDiscount(float waterBill, float unitsUsed);
void displayBill(string name, float unitsUsed, float waterBill, float discount, float disBill);


int main (){

	string name;
	float unitsUsed, ratePerUnit = 50.0, waterBill, discount, disBill;
       //geting user input
       getCustomerDetails(name, unitsUsed);

	   //calculating the bill and discount
       waterBill = calculateBill(unitsUsed, ratePerUnit);
       discount = applyDiscount(waterBill, unitsUsed);
	   
	   //calculating the final bill after discount
       disBill = waterBill - discount;

       //dispalying the bill
       displayBill(name, unitsUsed, waterBill, discount, disBill);

             return 0;

}

void getCustomerDetails(string &cusName, float &unitsUsed){
         cout<<"Enter the custmers name: ";
         getline(cin,cusName);

         cout<<"Enter the units consumed: ";
         cin>>unitsUsed;
    }

float calculateBill(float unitsUsed, float ratePerUnit){
         return unitsUsed * ratePerUnit;
        
    }

float applyDiscount(float waterBill, float unitsUsed){
            float discount =0.0;
            if (unitsUsed > 100){
             discount = waterBill * 0.10f;
            }
            return discount;
    }
void displayBill(string name, float unitsUsed, float waterBill, float discount, float disBill){
        cout<< "Customer name:              "<<name<<"\n"
            << "Units consumed :            "<<unitsUsed<<"\n"
            << "Total Bill before discount: "<<waterBill<<"\n"
            << "Discount:                   "<<discount<<"\n\n"
            << "Final amount payable:       "<<disBill<<endl;

    }


