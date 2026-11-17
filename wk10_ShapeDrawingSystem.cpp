/*
    SHAPE DRAWING SYSTEM (functio overriding - Run-time polymorphism)
    STUDENT NAME : PATRICK NJUGUNA WANGUI
    REG NUMBER   : CT101/G/26598/25
 */

#include <iostream>
//i am avoiding using "using namespace std"
 //base class
class Shape{
    public:
    virtual void draw(){
        std::cout << "Draw a shape! " <<std::endl;
    }  
    //apparently dest practice to use a destructor
    virtual ~Shape(){} // full function i dont need a semicolon
};
// derived class
class Circle: public Shape{
    public:
        //polymorphed method with the override keyword
     void draw() override{
         std::cout << "Drawing Circle" << std::endl;

     } 
};

class Rectangle: public Shape{
    public: 
    void draw() override{
         std::cout << "Drawing Rectangle" << std::endl;

     }
    
};

class Triangle: public Shape{
    public:
     void draw() override{
         std::cout << "Drawing Triangle" << std::endl;

     } 

};


int main (void){
    //objects
    Circle C1;
    Rectangle R1;
    Triangle T1;

    // base class pointer - create once and reuse
    Shape* shapePtr = &C1;
    shapePtr->draw();

    shapePtr = &R1;
    shapePtr->draw();

    shapePtr = &T1;
    shapePtr->draw();
  
     return 0;
}










