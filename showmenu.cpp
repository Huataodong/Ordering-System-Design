#include<iostream>
#include<string>
#include "food.h"
#include "mainfood.h"
#include "dessert.h"
#include "drinks.h"

using namespace std;

string dashes(string name, int space)
{

	string dashed_name = name;

	//add space to the input string until it is the size of input integer
	if (name.size() < space)
	{
		for (int i = 0; i < space - name.size(); i++)
		{
			dashed_name = dashed_name +"-";
		}
	}

	return dashed_name;
}

void showmenu(food *first)
{ 

    cout<<"\t\t|"<< first->get_foodID()<< "." <<dashes(first->get_name(),25) << dashes(first->get_feature(), 25) << first->get_price()<<"|"<< endl;

}



