#ifndef employee_h
#define employee_h
#include <string>
#include "person.h"

class employee : public person
{

public:
	//default constructor
    employee();
    //constructors
    employee(std::string name, int ID);    
    employee(double balance);

    //Polymorphism (a virtual function). Returns the sum of the prices with a 10% discount
	int order(int main_price, int drinks_price, int dessert_price);

	//default destructor
	~employee();
};

#endif
