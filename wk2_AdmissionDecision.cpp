/*
         ADMISSION DECISION TOOL
Student name:         Patrick Njuguna Wangui
Regestration number:  CT101/G/26598/25
*/

#include <iostream>
using namespace std;


int main (){
   string name, admission; 
   int age, examScore;

   cout<<"Enter students name: ";
   cin>>name;

   cout<<"Enter student age: ";
   cin>>age;

   cout<<"Enter student score: ";
   cin>>examScore;
     //admision logic
   if(age >= 18){
       if(examScore >+ 50){
           admission = "Admitted";
       }
       else{
           admission = "Not Admitted:Low Score";
            }
   }
   else{
       admission = "Not Admitted:Underage";
  }
   cout<<"\nSTUDENT NAME: "<<name<<"\n"
       <<"STUDENT AGE: "<<age<<"\n"
       <<"ADMISSION STATUS: "<<admission<<endl;


       return 0;

    }
