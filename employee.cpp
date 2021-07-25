#include "employee.h"
using namespace std;

employee::employee() : person()
{  
	
}

employee::employee(string i_name, int i_id): person(i_name, i_id)
{
    name= i_name;
    id = i_id;
    balance = 0;
}

employee::employee(double i_balance)
{
	balance = i_balance;
}

int employee::order(int main_price, int drinks_price, int dessert_price)
{
	int total_price;
	total_price = main_price + drinks_price + dessert_price;
	total_price = total_price -total_price * .1;
	return total_price;
}

employee::~employee()
{

}


