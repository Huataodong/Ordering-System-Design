#ifndef person_h
#define person_h
#include <string>

class person
{

  protected:

	  std::string name;
	  int id;
	  double balance;

  public:
	  //default constructor
      person();
      //constructors
	  person(std::string name, int id);
      person(double i_balance);

      //returns name
	  std::string get_name();
	  //returns id
	  int get_id();
	  //returns balance
	  double get_balance();
      //Polymorphism (a virtual function). Employee int order is 10% discount. Student order has no discount
	  virtual int order(int main_price, int drinks_price, int dessert_price);

	  //destructor
	  ~person();
};
#endif



