#ifndef mainfood_h
#define mainfood_h
#include<string>
#include"food.h"

class mainfood: public food
{
	
   public:
	  //default constructor
  	  mainfood();
  	  //constructor
  	  mainfood(int foodID,std::string name, int price, std::string feature);

  	  //methods
  	  //returns spice_level
  	  std::string get_feature();
  	  //makes food an abstract class
  	  void abstract_class();

  	  //default destructor
  	  ~mainfood();
};

#endif
