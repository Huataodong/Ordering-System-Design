#include "drinks.h"
#include<string>
using namespace std;

drinks::drinks():food()
{

}

drinks::drinks(int i_foodID,std::string name, int price, string feature): food(i_foodID,name, price)
{
	type = "main";
	temperature = feature;
}

string drinks::get_feature()
{
	return temperature;
}

//makes food an abstract class
void drinks::abstract_class()
{

}

drinks::~drinks()
{

}