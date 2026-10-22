/*
         EMPLOYEE BONUS SYSTEM
     STUDENT NAME:   PATRICK NJUGUNA
     REGESTATION NO: CT101/G/26598/25
 */

#include<iostream>
#include<string>

using namespace std;

float calcBonus(float bSalary);

int main (){
   string name[5];
   float bSalary[5];
   float salBonus, totSalary[5];
  //gets the five employees details
   for(int i = 0; i < 5;i++){
       cout<<"Enter empoyee "<<i+1<<" name and basic salary\nName: ";
       getline( cin,name[i]);
        cout<<"Basic salary: ";
        cin>>bSalary[i];
        //clears the buffer for the enter key
        cout<<"\n";
        cin.ignore(); 
  //caclulates the bonus and total salary
     salBonus = calcBonus(bSalary[i]);
     totSalary[i] = bSalary[i] + salBonus; 
      
   }
     
     // displays the salaries
    for(int i = 0; i < 5; i++){
        cout<<"\n----Employees-Details-Display-----";
        cout<<"\nEmployee "<<i +1<<"\nName: "<<name[i]<<"\nBasic Salary: "<<bSalary[i]<<"\nTotal Salary: "<<totSalary[i]<<"\n\n"<<endl;
        cout<<"-----------------------------------\n";
    }
       return 0;
}

float calcBonus(float bSalary){
   return 0.05 * bSalary;
}



