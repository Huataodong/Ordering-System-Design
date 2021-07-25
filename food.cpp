#include "food.h"
#include<string>
using namespace std;


food::food()
{
    price=0;
    name="empty";
    foodID=0;
}
 
food::food(int i_foodID,string i_name, int i_price)
{
    name=i_name;
    price=i_price;
    foodID=i_foodID;
}

int food::get_foodID()
{
   return foodID;
}

double food::get_price()
{
   return price;
}

string food::get_name()
{
   return name;
}

string food::get_feature()
{
   return "";
}

food::~food()
{

}




