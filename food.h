#ifndef FOOD_H
#define FOOD_H
#include<string>

class food
{

    protected:
      //states
      std::string name;
      double price;
      std::string type;
      int foodID;

      //initialized and used only by dessert
      std::string sugar_level;
      //initialized and used only by drinks
      std::string temperature;
      //initialized and used only by mainfood
      std::string spice_level;
  
    public:
      //default constructor
      food();
      //constructor
      food(int i_foodID,std::string name, int price);

      //methods
      //return foodID
      int get_foodID();
      //return price
      double get_price();
      //return name of food
      std::string get_name();

      //Polymorphism(virtual method). 
      //Returns sugar level if called by dessert. temperature if drinks. spice level if mainfood
      virtual std::string get_feature();

      //Makes food an abstract class.
      //'=0' makes the food class an abstract class 
      //Do "food *firstFood = new food()" in main and it will cause an error.
      virtual void abstract_class() = 0;

      //default destructor
      ~food();
  
};

#endif
