#ifndef dessert_h
#define dessert_h
#include<string>
#include"food.h"

class dessert: public food
{

   public:
	   //default constructor
  	   dessert();
  	   //constructor
  	   dessert(int i_foodID,std::string name,int price, std::string feature);

  	   //methods
  	   //returns sugar_level
  	   std::string get_feature();
  	   //makes food an abstract class
  	   void abstract_class();

  	   //default destructor
  	   ~dessert();
};

#endif
