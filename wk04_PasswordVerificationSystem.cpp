/*
       PASSWORD VERIFICATION SYSTEM(do-while loop)
    STUDENT NAME:    PATRICK NJUGUNA
    REGESTRATION NO: CT101/G/26598/25 
    */
#include<iostream>
#include<string>

using namespace std;

int main(){
       //pre defined - will not change throughout
      const string USER_NAME = "Patrick";
      const string PASSWORD =  "dieei";
       //input variables
      string input_name = "";
      string input_pass ="";

       do{ 
           //gets credentials
           cout<<"Enter your user name: ";
           getline(cin, input_name);
           
           cout<<"ENter your password: ";
           getline(cin, input_pass);

         //checking credentials
         if(input_name == USER_NAME && input_pass == PASSWORD)
         {
             cout<<"\nAccess Granted"<<endl;
             break;
            }
         else{
             cout<<"Incorrect credetials, try again! "<<endl;
          }
       }
       while(true);
    return 0;
}
