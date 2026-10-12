/*
       VEHICLE SYSTEM (inheritance)
       STUDENT NAME: PATRICK NJUGUNA WANGU
       REG NUBMER  : CT101/G/26598/25
 */

#include<iostream>

using namespace std;

 //parent  havinf universal attributes for vehicles
class Vehicle{
    public:
      string brand;
      int yearOfManufacture;

        //displays the vehicle detail
      void displayVehicle(){
           cout << "\nVehicle Brand:        "<<brand<<"\nYear of Manufacture:  "<<yearOfManufacture<<endl;
      }
 

};

class Car : public Vehicle{
    private:
      int numDoors;
      float engineCapacity;
    public:
      //constructor type shi
      Car(string cBrand, int yMan, int nDoors, float eCapacity){
          brand = cBrand;
          yearOfManufacture = yMan;
          numDoors = nDoors;
          engineCapacity = eCapacity;
      }
      void displayCar(){
          cout << "\n---------------------------------------"<<endl;
          displayVehicle();
          cout << "Number of doors:      "<<numDoors<<"\nEngine Capacity:      "<<engineCapacity<<" Liter v8"<<endl;
      }
      //distrocotor type shi
      ~Car(){
         cout << "Exiting ..."<<endl;
      }
 
};

int main(void){
    //hardcorded input
    Car car1("Bentley Arnage", 2001, 4, 6.75);
        car1.displayCar();  
    
     return 0;
}

