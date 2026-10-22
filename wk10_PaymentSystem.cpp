/*
      PAYMENT SYSTEM (function overloading - compile-time Polymorphism)
      STUDENT NAME: PATRICK NJUGUNA WANGUI
      REG NUMBER  : CT101/G/26598/25

 */

#include <iostream>

using namespace std;
class Payment{
    public:
        //atrributes
        int payAmount;
        float fee, payDiscount;

    // method for cash payment
    void processPayment(int amount){
        payAmount = amount;
        fee = 0.0f;
        payDiscount = 0.0f;

        cout<<"\n--- Processing Cash Payment ---" << endl;
        cout<< "Base Amount: ksh" << amount << endl;
        cout<< "Final Total Paid: Ksh" << amount << "\n" << endl;
        
      
    }
    //method for card payment
    void processPayment (int amount,float transFee){
        payAmount = amount;
        fee = transFee;
        payDiscount = 0.0f;

        float finalTotal = amount + transFee;
        
        cout<< "--- Processing Card Payment ---" << endl;
        cout<< "Base Amount: ksh" << amount << endl;
        cout<< "Transaction Fee: ks" << transFee << endl;
        cout<< "Final Total Paid: ksh" << finalTotal << "\n" << endl;
    }

     //method for mobile payment
    void processPayment (int amount,float transFee, float discount){
        payAmount = amount;
        fee = transFee;
        payDiscount = discount;

        float finalTotal = (amount + transFee) - discount;
        
        cout<< "--- Processing Promo Payment ---" << endl;
        cout<< "Base Amount: sh " << amount << endl;
        cout<< "Transaction Fee: ksh " << transFee << endl;
        cout<< "Discount Applied: -ksh " << discount << endl;
        cout<< "Final Total Paid: ksh " << finalTotal << "\n" << endl;
    }

};

int main(void){
    //object
   Payment Payee1;
   // displaying all the possibly choosedn options 
    Payee1.processPayment(5000);                    
    Payee1.processPayment(3200,150.50f);           
    Payee1.processPayment(10000,200.0f,1500.0f);

}
