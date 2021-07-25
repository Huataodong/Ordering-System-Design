#ifndef student_h
#define student_h
#include<string>
#include "person.h"

class student : public person
{

   public:
	 
     //default constructor
     student();
     //constructors
     student(std::string name, int ID);    
     student(double balance);

     //Polymorphism (a virtual function). Returns the sum of the prices with a no discount.
	 int order(int main_price, int drinks_price, int dessert_price);

	 //default destructor
	 ~student();
};

#endif
