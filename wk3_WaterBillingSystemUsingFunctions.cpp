/*
               WATER BILLING SYSTEM
        STUDENT NAME: PATRICK NJUGUNA WANGUI
        REG  NUMBER:  CT101/G/26598/25

*/
#include<iostream>

using namespace std;
//prototypes
void getCustomerDetails(string cusName, float unitsUsed);
float calculateBill(float unitsUsed, float ratePerUnit);
float applyDiscount(float waterBill);
void displayBill(string name, float unitsUsed, float waterBill, float discount, float disBill);


int main (){

       getCustomerDetails();
       calculateBill();
       applyDiscount();
       displayBill();

             return 0;Lwq

}

void getCustomerDetails(string cusName, float unitsUsed)){
         cout<<"Enter the custmers name: ";
         cin>>cusName;

         cout<<"Enter the units consumed: ";
         cin>>unitsUsed;
    }

float calculateBill(float unitsUsed, float ratePerUnit){
         float waterBill = unitsUsed * ratePerUnit;
         return waterBill;
    }

float applyDiscount(float waterBill){
            float discount;
            if (unitsUsed > 100){
             discount = waterBill * 0.1;
            }
            return discount;
    }
void displayBill(string name, float unitsUsed, float waterBill, float discount, float disBill){
        cout<< "Customer name:              "<<name<<"\n"
            << "Units consumed :            "<<unitsUsed<<"\n"
            << "Total Bill before discount: "<<waterBill<"\n"
            << "Discount:                   "<<discount<<"\n\n"
            << "Final amount payable:       "<<disBill<<endl;

    }


