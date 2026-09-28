/*
	GRADING SYSTEM
	STUDENT NAME: Patrick Njuguna Wangui
	REGISTRATION NUMBER: CT101/G/26598/25

*/

#include <iostream>
#include <string>

using namespace std;

int main (void){

     string studentName;
     int examMarks;
     string testResults;

     cout << "Enter the students name: "<<endl;
     getline(cin,studentName);

     cout << "Enter the students exam marks: "<<endl;
     cin >>examMarks;

     //assigning grade according to the marks
     if(examMarks >=70 && examMarks <= 100)
     {
         testResults = "A";
     }

     if(examMarks >=60 && examMarks <=  69)
     {
         testResults = "B";
     }

     if(examMarks >=50 && examMarks <=  59)
     {
         testResults = "C";
     }

     if(examMarks >=40 && examMarks <=  49)
     {
         testResults = "D";
     }

     if(examMarks < 40)
     {
         testResults = "E";
     }
  
     cout << "\n-----------------------------------\n"<<endl;
     cout << "STUDENT NAME: "<<studentName<<"\n"
          << "EXAM MARKS  : "<<examMarks<<"\n"
          << "GRADE       : "<<testResults<<endl;
     cout <<"-------------------------------------\n"<<endl;
    
    return 0;
}
