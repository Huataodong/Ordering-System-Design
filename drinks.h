#ifndef drinks_h
#define drinks_h
#include<string>
#include"food.h"

class drinks: public food
{

   public:
  	   //default constructor
  	   drinks();
  	   //constructor
  	   drinks(int i_foodID,std::string name,int price, std::string feature);

  	   //methods
  	   //returns temperature
  	   std::string get_feature();
  	   //makes food an abstract class
  	   void abstract_class();

  	   //default destructor
  	   ~drinks();
};

#endif
