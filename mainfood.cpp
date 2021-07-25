#include "mainfood.h"
#include<string>
using namespace std;

mainfood::mainfood():food()
{

}

mainfood::mainfood(int foodID, std::string name, int price, string feature): food(foodID, name, price)
{
	type = "main";
	spice_level = feature;
}

string mainfood::get_feature()
{
	return spice_level;
}

//makes food an abstract class
void mainfood::abstract_class()
{

}

mainfood::~mainfood()
{

}