#include "student.h"
using namespace std;

student::student() : person()
{

}

student::student(string i_name, int i_id): person(i_name, i_id)
{
    name= i_name;
    id = i_id;
    balance = 200;
}

student::student(double i_balance)
{
	balance = i_balance;
}

int student::order(int main_price, int drinks_price, int dessert_price)
{
	int total_price;

	total_price = main_price + drinks_price + dessert_price;
	
	return total_price;
}

student::~student()
{

}



