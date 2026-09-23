   /*

   MOBILE PHONE SALES RECEIPT SYSTEM 
   Student name: patrick njuguna 
   Registration number: CT101/G/26598/25 
*/ 


#include <iostream> 
using namespace std; 

int main(void) { 
    // Important variables 
    string customerName; 
    string phoneModelPurchased; 
    int quantityBought; 
    float pricePerPhone; 
    float totalSalesAmount; 

    cout << "Enter customer's name: " << endl; 
    cin >> customerName; 

    cout << "Enter the phone model purchased: " << endl; 
    cin >> phoneModelPurchased; 

    cout << "Enter the price per phone: " << endl; 
    cin >> pricePerPhone; 

    cout << "Enter the quantity bought: " << endl; 
    cin >> quantityBought; 

    // Calculates total price 
    totalSalesAmount = quantityBought * pricePerPhone; 

    // Display receipt 
    cout << "\n++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "Customer Name: " << customerName << "\n"
         << "Phone Model Bought: " << phoneModelPurchased << "\n"
         << "Price Per phone: " << pricePerPhone << "\n"
         << "Quantity bought: " << quantityBought << "\n\n"
         << "TOTAL AMOUNT: " << totalSalesAmount << endl; 
    cout << "\n++++++++++++++++++++++++++++++++++++++++\n"; 

    return 0;
}












