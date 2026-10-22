/*
       HOTEL MANAGMENTS SYSTEM(area of examin == arrays)
    STUDENT NAME: PATRICK NJUGUNA WANGUI
    REG NUMBER  : CT101/G/26598/25
 */


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (void){
     //1-D   stores the daily revenue
    float revenue[7]; 
    float wk_revenue = 0.0f;
    float av_revenue = 0.0f;
    //2-D  Room occupancy
    int occupancy[5][10] = {0};
    //i probly need some menu for all this options
    int choice = 0;
    int tot_occupied = 0;
    
     int user_floor = 0;
     int user_room = 0;

     // 3-D Multiple branches
    int chain[3][5][10];
    //seed 
    srand(time(NULL));
    do{
    cout << "--MENU--\n1.Enter weekly revenue\n2.Show total and average weekly revenue\n3.Take room\n4.Display room status\n5.Chain occupany\n6.Exit\n"<<endl;
    cin >> choice;
    //monitoring revenue
    //promps for daily revenue 
    switch (choice){
        case 1:
            wk_revenue = 0.0f;
    for(int i = 0; i < 7; i++){
      cout<< "Enter  day "<<i+1<< " revenue: ";
      cin>>revenue[i];
       //adding new rev to previous       
      wk_revenue += revenue[i];
    }
       //calculates the average
    av_revenue = wk_revenue / 7;
    cout << "Revenue data saved succesfully!\n";
       break;
        case 2:
    //display
    cout << "\nTotal weekly average revenue : "<<wk_revenue<<endl;
    cout << "Average daily revenue:         "<<av_revenue<<endl;
    break;

      case 3:           
           cout << "Enter the room floor and number to occupy\nFloor(1-5): ";
           cin >>user_floor;
           cout<< "Room number(1-10): ";
           cin >> user_room;

     // input boundaries
     if(user_floor >= 1 && user_floor <= 5 && user_room >= 1 && user_room <= 10) {
                   int f_idx = user_floor - 1;
        int r_idx = user_room - 1;
             // if 1 was assigned to it
        if(occupancy[f_idx][r_idx] == 1) {
         cout << "Sorry, Room " << user_room << " on Floor " << user_floor << " is ALREADY occupied!\n";
           } else {
              
                occupancy[f_idx][r_idx] = 1; // occupied
                 tot_occupied++;
                  cout << "Success! Room " << user_room << " on Floor " << user_floor << " is now occupied.\n";
              }
         } else {
             cout << "Invalid Floor or Room number entered!\n";
            }
        break;
      case 4:
     cout << "\n--- ROOM OCCUPANCY REPORT ---\n";
      
     for(int i = 0; i < 5; i++) {
        int occupied_on_floor = 0;
          for(int j = 0; j < 10; j++) {
           if(occupancy[i][j] == 1) {
              occupied_on_floor++;
                    }
            }
            int vacant_on_floor = 10 - occupied_on_floor;
                   cout << "Floor " << i + 1 << " -> Occupied: " << occupied_on_floor << " | Vacant: " << vacant_on_floor << "\n";
            }
     cout << "Total hotel rooms occupied: " << tot_occupied << " / 50\n";
      break;
     case 5:{
        int grand_total_occupied = 0;
        cout << "\n--3D MULTI-BRANCH SIMULATION--\n";
        //assign rando occpupancy
          for(int i = 0; i < 3; i++){
             for(int j = 0; j < 5; j++){
                 for(int k = 0; k <10; k++){
                 chain[i][j][k] = rand() % 2;
                 }
             }
         }
          //calc and display tot occupied- all branches
        for (int b = 0; b < 3; b++) {
                    int branch_occupied = 0;
                    for (int f = 0; f < 5; f++) {
                        for (int r = 0; r < 10; r++) {
                            if (chain[b][f][r] == 1) {
                                branch_occupied++;
                            }
                        }
                    }
                    grand_total_occupied += branch_occupied;
                    cout << "Branch " << b + 1 << " Total Occupied: " << branch_occupied << " / 50\n";
                }
                
                cout << "\nGRAND TOTAL OCCUPIED ROOMS ACROSS ALL BRANCHES: " << grand_total_occupied << " / 150\n";
                break;
            }
     case 6:
      cout << "Exiting system!\n";
      break;

     default: 
       cout << "Invalid option! Enter a number between 1 - 5.\n";
      break;
        }
    } while (choice != 6);

    return 0;
}





