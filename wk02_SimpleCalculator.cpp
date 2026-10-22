/*
          SIMPLE CALCULATOR
 Student Name:         Patrick Njuguna Wangui
 Regestration Number: CT101/G/26598/25

*/

#include<iostream>
using namespace std;

int main(){
    
    double num1, num2, results =0;
    char op;
	bool validCalc = true;
 
  cout<<"Enter two values \nnumber1: "<<endl;
  cin>>num1;
  
  cout<<"number2: "<<endl;
  cin>>num2;

  cout<<"Enter operation (+, -, *, /): "<<endl;
  cin>>op;

  switch(op){
   case '+':
      results = num1 + num2;
      break;
   case '-':
      results = num1 - num2;
      break;    
   case '*':
      results = num1 * num2;
      break;
   case '/':    

   //division by zero error handling
      if(num2 == 0){
          cout<<"Division by zero Error!: "<<endl;
		  validCalc = false;
      }
      else{
      results = num1 / num2;
      }
      break;
   default:
      cout<<"Invalid operation"<<endl;
	  validCalc = false;   
	  break;

  }
  if (validCalc){
   cout <<"Results: "<<results<<endl;
  } 

   return 0;


}
