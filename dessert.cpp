#include "dessert.h"
#include<string>
using namespace std;

dessert::dessert():food()
{

}

dessert::dessert(int i_foodID,std::string name, int price, string i_feature): food(i_foodID,name,price)
{
	type = "main";
	sugar_level = i_feature;
}

string dessert::get_feature()
{
	return sugar_level;
}

//makes food an abstract class
void dessert::abstract_class()
{

}

dessert::~dessert()
{

}