/*
          SIMPLE CALCULATOR
 Student Name:         Patrick Njuguna Wangui
 Regestration Number: CT101/G/26598/25

*/

#include<iostream>
using namespace std;

int main(){
    
    double num1, num2, results;
    char op;
 
  cout<<"Enter two values \nnumber1: "<<endl;
  cin>>num1;
  
  cout<<"number2: "<<endl;
  cin>>num2;

  cout<<"Enter operation: "<<endl;
  cin>>op;

  switch(op){
   case '+':
      results = num1 + num2;
   case '-':
      results = num1 - num2;
   case '*':
      results = num1 * num2;
   case '/':
   //division by zero error handling
      if(num2 == 0){
          cout<<"Division by zero Error: "<<endl;
          cin>>num2;
      }
      else{
      results = num1 / num2;
      }

   default:
      cout<<"Invalid operation"<<endl;
  }

   cout <<"Results: "<<results<<endl;

   return 0;


}
