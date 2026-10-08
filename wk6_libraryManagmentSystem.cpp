/*
        LIBRARY MANAGMENT SYSTEM (classes and objects)
    STUDENT NAME: PATRICK NJUGUNA WANGUI
    REG NUMBER  : CT101/G/26598/25
 */

#include<iostream>
#include<string>
using namespace std;
//book class
class Book{
     public:
      string book_title;
      string author;
      //hardcoded copies
       int copies = 100;
      
      void inputDetails(){
          cout << "Enter book title: ";
          getline(cin, book_title);
          cout << "Enter book author: ";
          getline(cin, author);
          cout << "Enter the number of copies: ";
          cin >> copies;
      }
      void borrowBook(){
          //checking if book is instock logic
          if(copies > 0 && copies < 100){
              copies --;
          cout << "Book borrowed succesfully!\n";
         }
          else{
              cout << "The book is currently unavailable!\n ";
          }
       }
      void displayDetails(){
           cout << "\n--- Book Details ---\nBook title: "<<book_title<<"\nBook author: "<<author<<"\nNumber of copies: "<<copies<<endl;
      }
  
};

int main(){
    //book oject
    Book Book1;
   
    Book1.inputDetails();
    Book1.borrowBook();
    Book1.displayDetails();

        return 0;
}













