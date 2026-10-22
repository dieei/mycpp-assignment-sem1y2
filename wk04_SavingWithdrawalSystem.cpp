/*
      SAVING WITHDRAWAL SYSTEM (while loop)
    STUDENTS NAME: PATRICK NJUGUNA WANGUI
    REG NUMBER   : CT101/G/26598/25
  */
//improvable
#include<iostream>
#include<string>

using namespace std;

int main(){
    //hardcorded account balance
    float accBalance = 100000.0f, withdrawal = 0.0f;
            
         cout<<"Initial account Balance: "<<accBalance<<endl;

           while(accBalance > 0 ){
             //checks weather the account has funds
                cout<<"Enter the amout you wish to withdraw: ";
                cin>>withdrawal;
                    if(withdrawal == 0 || withdrawal < 0){
                        cout<<"\nExiting.Thank You!"<<endl;
                        break;
                    }

                //checking if withdrawal is more than the available funds
                    if(withdrawal <= accBalance){
                            accBalance -= withdrawal;
                            cout<<"Remaining Balance: ksh" <<accBalance<<endl;
                                        }
                    else{
                            cout<<"Insafficient funds!:"<<accBalance<<endl;
                                             }
                    if(accBalance == 0){
                        cout<<"Empty: "<<accBalance<<endl;
                    }
                                                 }

       cout<<"Final Balance: "<<accBalance<<endl;
    


    return 0;
}
