   /*
   DRIVING TEST RESULT EVALUATION SYSTEM

   Student Name: Patrick Njuguna Wangu
   Regestration num: CT101/G/26598/25
*/

#include<iostream>
#include<string>
using namespace std;

int main (void){
   string studentName;
   float theoryMarks;
   float pracMarks;
   float aveScore;
   string testResults;

   cout << "Enter the students name: "<<endl;
   getline(cin,studentName);

   cout << "Enter theory test marks: "<<endl;
   cin >>theoryMarks;

   cout <<"Enter practical test marks: "<<endl;
   cin >>pracMarks;

       //calculating average score
       aveScore = (theoryMarks + pracMarks) / 2;
            
            //checks if student has passed or fail
       if ( aveScore >= 50){
           testResults = "passed";
       }
       else{
           testResults = "failed";
       }


       //dispay the results
       cout <<"++++++++++++++++++++++++++++++++++++++++"<<endl;
       cout << "> Student Name: "<<studentName<<"\n"
            << "> Theory test marks: "<<theoryMarks<<"\n"
            << "> Practical test marks: "<<pracMarks<<"\n"
            << "> Average score : "<<aveScore<<"\n\n"
            << "> Student has : "<<testResults<<endl;
      cout <<"+++++++++++++++++++++++++++++++++++++++++++"<<endl;
     return 0;
}


