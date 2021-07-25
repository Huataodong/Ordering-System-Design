#include "person.h"
using namespace std;

person::person()
{
   balance = 0;
}

person::person(string i_name, int  i_id)
{
	name = i_name;
	id = i_id;
}

person::person(double i_balance)
{
	balance=i_balance;
}

string person::get_name()
{
	return name;
}

int person::get_id()
{
	return id;
}

double person::get_balance()
{
	return balance;
}

int person::order(int main_price, int drinks_price, int dessert_price)
{
	int total_price;
	return total_price;
}

person::~person()
{

}



