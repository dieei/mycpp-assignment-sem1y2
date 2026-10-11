/*
   HOTEL MANAGEMENT SYSTEM (constructor and destructors)
   STUDENT NAME: PATRICK NJUGUNA WANGUI
   REG NUMBMER : CT101/G/26598/25    
 */

#include<iostream>
#include<string>

using namespace std;

class RoomBooking{
      private:
          string name;
          string room_number; 
          int days_booked;
          
      public:
          //initializes attributes and confirmes booking
          RoomBooking(string gName, string rNumber, int dBooked){
              name = gName;
              room_number = rNumber;
              days_booked = dBooked;

              cout << "Room booking confirmed" <<endl;
               
          }
          //displays user details
          void displayBooking(){
               cout << "Guest name: "<<name<<"\nRoom number: "<<room_number<<"\nNumber of days booked: "<<days_booked<<endl;               

          }

          ~RoomBooking(){
                cout << "\nBooking ended, room released" <<endl;
          }
    
};

int main(){
    RoomBooking room1("Patrick Njuguna", "B3014", 30);
    room1.displayBooking();

   return 0;
}


