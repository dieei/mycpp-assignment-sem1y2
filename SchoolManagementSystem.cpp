/*
        SCHOOL MANAGEMENT SYSTEM (inheritance)
        STUDENT NAME:  PATRICK NJUGUNA WANGUI
        REG NUMBER  :  CT101.G.26598
 */

#include<iostream>
#include<string>

using namespace std;

//Parent - contains universal human attributes
class Person{
    public: 
        string name;
        int age;
        
        void displayPerson(){
             cout << "\nName: "<<name<<"\nAge: "<<age<<endl;      
        }


};
// inherits parent attributes to reduce repetition
class Student : public Person{
      public: 
          int admNumber;
          string stdClass;

          //mapping input data to inherited and student data
        Student(string sName, int sAge, int aNumber, string sClass){
               name = sName;
               age = sAge;
               admNumber = aNumber;
               stdClass = sClass;
        }
    //diplays the student and inherited attributes
    void displayStudent(){
        displayPerson();
        cout <<"Admission number: "<<admNumber<<"\nClass: "<<stdClass<<endl; 
    }
    ~Student(){
        cout << "\nExiting ..."<<endl;
    }
  
};


int main (void){
    //student object created and its paramaters
    Student std1("Patrick Njuguna", 20, 12345, "2B");
    //display
    std1.displayStudent();
  
 
   return 0;
}










