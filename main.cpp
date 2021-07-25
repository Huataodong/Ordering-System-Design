#include<string>
#include<iostream>
#include <limits>
#include "person.h"
#include "employee.h"
#include "student.h"
#include "food.h"
#include "mainfood.h"
#include "dessert.h"
#include "drinks.h"
using namespace std;

void showmenu(food *first);
void choice_check(int &int_variable);
void quantity_check(int &int_variable);
void pause(string &string_variable, string message);
string dashes(string name, int space);

int main()
{
    string username;
    int password;
    string dummyVariable;
    string employee_or_student;
    string username1[5]={"aaaa", "bbbb", "cccc", "dddd", "eeee"};
    string username2[5]={"ffff", "gggg", "hhhh", "jjjj", "kkkk"};
    int spassword[5]={1111, 1112, 1113,1114, 1115};
    int epassword[5]={2222,2223,2224,2225,2226};
    bool sList = false;
    bool eList = false;
    person *firstBalance;

    //array making of food
    food *mainArray = new mainfood[6]; 

    mainArray[0] = mainfood(1,"Stirfry",15, "spicy");
    mainArray[1] = mainfood(2,"Fish & Chips",16, "not spicy");
    mainArray[2] = mainfood(3,"Cheeseburger", 17, "not spicy");
    mainArray[3] = mainfood(4,"Steak Sandwich", 18, "very spicy");
    mainArray[4] = mainfood(5,"Hot Poke Bowl", 19, "mildly spicy");
    mainArray[5] = mainfood(0,"Enter 0 to skip ",0, "--");
    
    //array making of drinks
    food *drinksArray = new drinks[6];

    drinksArray[0] = drinks(1,"Coca Cola", 15, "cold");
    drinksArray[1] = drinks(2,"Sprite",16, "cold");
    drinksArray[2] = drinks(3,"Soda Water",17, "cold");
    drinksArray[3] = drinks(4,"Orange Juice", 18, "cold");
    drinksArray[4] = drinks(5,"Green Tea",19, "hot");
    drinksArray[5] = drinks(0,"Enter 0 to skip ", 0, "--");
   
    //array making of dessert
    food *dessertArray = new dessert[6];

    dessertArray[0] = dessert(1,"Mint Oreo Cake", 15, "150g");
    dessertArray[1] = dessert(2,"Strawberry Cake", 16, "130g");
    dessertArray[2] = dessert(3,"Cream Doughnuts",17, "160g");
    dessertArray[3] = dessert(4,"Cheesecake Bars",18, "180g");
    dessertArray[4] = dessert(5,"Meyer Lemon Bars",19, "180g");
    dessertArray[5] = dessert(0,"Enter 0 to skip ", 0, "--");
    
    
    cout<<endl;
    cout<<endl;
    //
    cout<<"\t\t|******Welcome to Buzztime food center******|"<<endl; 
    cout<<endl;
    cout<<"\t\t---------------------------------------------"<<endl;
    cout<<"\t\t|We only serve students and employees.      |"<<endl; 
    cout<<"\t\t|                                           |"<<endl; 
    cout<<"\t\t|Employees can get 10 percent discount.     |"<<endl;
    cout<<"\t\t|                                           |"<<endl;
    cout<<"\t\t|Please use meal card to login and purchase.|"<<endl;
    cout<<"\t\t---------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;


    pause(dummyVariable, "Enter any key to continue . .");

	//are you an employee or a student?
    cout<<"Are you a student or an employee?"<<endl << endl; 
	//enter employee or student
    cout<<"Enter 'student' or 'employee'"<<endl;
    cout<<endl;
    cin>>employee_or_student;
  
    //while loop to check student or employee  
    while(employee_or_student!="student"&&employee_or_student!="employee")
    {
      cout << "Enter 'student' or 'employee'. Please try again: ";
      cin >> employee_or_student;
    }
    
    //if student
    if(employee_or_student=="student")
    {
        while(sList==false)
        {   
            cout<<endl;
            cout<<"Enter your username:";
            cin>>username;
            cout<<endl;
            cout<<"Enter your password:";
            
            cout<<endl;
               
               //make sure password must be number
               while (!(std::cin >> password)) 
               {
                   cin.clear();
                   cin.ignore(numeric_limits<streamsize>::max(), '\n');
                   cout<<endl;
                   cout << "Password must be number. Enter a valid number\n";
                   cout<<endl;
               }
               
               
               for(int i = 0; i < 5; i++)
               {   
                   //match username and password
                   if (username==username1[i]&& password == spassword[i])
                   {
                       sList=true;
                       srand((unsigned)time(NULL));
                       firstBalance=new student(50+rand()%150);  
                       break;
                   }
               }
           
              
               if(!sList)
               {
                   cout<<"please enter correct username and password"<<endl;
               }  
        }
    }
 
    //if employee
    else if(employee_or_student=="employee")
    {
        while(eList==false)
        {
          cout<<endl;
          cout<<"Enter your username:\n";
          cin>>username;
          cout<<endl;
          cout<<"Enter your password:";
          
          cout<<endl;
             //make sure password must be number
             while (!(std::cin >> password)) 
             {
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  cout<<endl;
                  cout << "Password must be number. Enter a valid number\n";
                  cout<<endl;
             }

             for(int i = 0; i < 5; i++)
             {    
                  //match username and passwor
                  if (username==username2[i]&& password == epassword[i])
                  {
                     eList=true;
                     srand((unsigned)time(NULL));
                     firstBalance=new employee(50+rand()%150);  
                     break;
                  }
             }
              
            //if incorrect username and password
            if(!eList)
            {
                cout<<"please enter correct username and password"<<endl;
            }             
        }
    }
     
    //found student in database
    if(sList == true)
    {     
        cout<<"\t\t|*****Found user in the database******|"<< endl;
        cout<<"\t\t---------------------------------------"<<endl;
        cout<<"\t\t Your username is:"<<username<<endl;
        cout<<"\t\t <"<<employee_or_student<<">"<<endl;
	    cout<<"\t\t Your balance is:"<<firstBalance->get_balance()<<endl; 
        cout<<"\t\t---------------------------------------"<<endl;
        cout<<endl;       
        pause(dummyVariable, "Enter any key to continue . .");

    }
    //found employee in database
    else if(eList=true)
    {       
        cout<<"\t\t|*****Found user in the database******|"<< endl;
        cout<<"\t\t---------------------------------------"<<endl;
        cout<<"\t\t Your username is:"<<username<<endl;
        cout<<"\t\t <"<<employee_or_student<<">"<<endl;
	    cout<<"\t\t Your balance is:"<<firstBalance->get_balance()<<endl; 
        cout<<"\t\t---------------------------------------"<<endl;
        cout<<endl;
        pause(dummyVariable, "Enter any key to continue . .");

    } 
    
    //FOOD MENU
    int balance=firstBalance->get_balance();
    int main_quantity; 
    int main_choice;
    int main_price = 0;


    cout<<endl;
    cout<<endl;
    cout<<"\t\t|*****************Here is our food menu****************|"<<endl;
    cout<<endl;
    cout<<"\t\t|Name*********************************************Price|"<<endl;
    
    for (int i = 0; i < 6; i ++)
    {  
       //show food menu
       showmenu(&mainArray[i]);
    }
       
    pause(dummyVariable, "Enter any key to continue . .");

    cout<<endl;
    cout<<endl;
    //enter the ID to choose from food menu
    cout << "Enter the dish number to choose: "<< endl;
    choice_check(main_choice);
    cout<<endl; 

     //if choice equal to 0, calculate the price
    if(main_choice==0)
    {
       main_quantity=0;
       main_price = mainArray[main_choice-1].get_price() * main_quantity; 
    }
    //enter quantity, calculate the price
    else
    {   
       cout << "Enter the dish quantity: "<< endl;
       quantity_check(main_quantity);
       main_price = mainArray[main_choice-1].get_price() * main_quantity;
       cout << "|You chose: " << mainArray[main_choice-1].get_name() <<" ,quantity:"<<main_quantity<< endl;
       cout<<endl;

       pause(dummyVariable, "Enter any key to continue . .");
    }



    int dessert_quantity;
    int dessert_choice;
    int dessert_price = 0;

    //DESSERT MENU
    cout<<endl;
    cout<<endl;
    cout<<"\t\t|***************Here is our dessert menu***************|"<<endl;
    cout<<endl;
    cout<<"\t\t|Name*********************************************Price|"<<endl;
    
    for (int i = 0; i < 6; i ++)
    { 
      //show dessert menu
      showmenu(&dessertArray[i]);
    }

    pause(dummyVariable, "Enter any key to continue . .");

    cout<<endl;
    cout<<endl;
    //enter dessert ID to choose
    cout << "Enter the dessert number to choose: "<< endl;
    choice_check(dessert_choice);
    cout<<endl;
    
    //if choice ID equal to 0, price equal to 0
    if(dessert_choice==0)
    {
        dessert_quantity=0;
        dessert_price = dessertArray[dessert_choice-1].get_price() * dessert_quantity;
    }
    //enter the dessert quantity, calculate the price
    else
    {  
        cout << "Enter the dessert quantity: "<< endl;
        quantity_check(dessert_quantity);
        dessert_price = dessertArray[dessert_choice-1].get_price() * dessert_quantity;
        cout << "|You chose: " << dessertArray[dessert_choice-1].get_name() <<" ,quantity:"<<dessert_quantity<< endl;
        cout<< endl;
  
        pause(dummyVariable, "Enter any key to continue . .");
    }


    //DRINKS MENU
    int drinks_quantity;
    int drinks_choice;
    int drinks_price = 0;

    cout<<endl;
    cout<<endl;
    cout<<"\t\t|***************Here is our drinks menu****************|"<<endl;
    cout<<endl;
    cout<<"\t\t|Name*********************************************Price|"<<endl;
    
    for (int i = 0; i < 6; i ++)
    {  
       //show drinks menu
       showmenu(&drinksArray[i]);
    }
    
    pause(dummyVariable, "Enter any key to continue . .");
 
    cout<<endl;
    cout<<endl;
    //enter drinks ID to choose
    cout << "Enter the drinks number to choose: "<< endl;
    choice_check(drinks_choice);    
    cout<<endl;
    
    // if choice equal to 0, price equal to 0
    if(drinks_choice==0)
    {
        cout<<endl;
        drinks_quantity=0;
        drinks_price = drinksArray[drinks_choice-1].get_price() * drinks_quantity;
 
    }
    //enter drink quantity, calculate price
    else
    {
  
        cout<<endl;
        cout << "Enter the drinks quantity: "<< endl;
        quantity_check(drinks_quantity);
        drinks_price = drinksArray[drinks_choice-1].get_price() * drinks_quantity;
        cout << "|You chose: " << drinksArray[drinks_choice-1].get_name() <<" ,quantity:"<<drinks_quantity<<endl;
        cout<<endl;
    
        pause(dummyVariable, "Press any key to finish your payment . .");
        
        //show what you chose
        cout <<"-------------------------------------------------------"<<endl;
        cout << "|You chose: " << mainArray[main_choice-1].get_name() <<" ,quantity:"<<main_quantity<< endl;
        cout << "|You chose: " << dessertArray[dessert_choice-1].get_name() <<" ,quantity:"<<dessert_quantity<< endl;
        cout << "|You chose: " << drinksArray[drinks_choice-1].get_name() <<" ,quantity:"<<drinks_quantity<<endl;
        cout <<"-------------------------------------------------------"<<endl;

        pause(dummyVariable, "Enter any key to continue . .");
        
    }
    
    //calculate total price(food, drinks, dessert)
    int totalPrice = main_price + drinks_price + dessert_price;
    // show your balance and total price
    cout << "Your current balance is " << firstBalance->get_balance() << endl;
    cout << "your total price is: " << totalPrice << endl;
    pause(dummyVariable, "Enter any key to continue . .");

    cout << "Employees get 10 percent discount. Students pay full price" << endl;
    pause(dummyVariable, "Enter any key to continue . .");
    
    //calculate discount
    totalPrice = firstBalance->order(main_price, drinks_price, dessert_price);
    cout << "After taking these into consideration, your total comes to " << totalPrice << endl;

    int balanceleft=balance-totalPrice;  
    int recharge_choice;
    int recharge_money;
    int newbalance;

    pause(dummyVariable, "Press any key to pay . .");
    
    //if balance is not enough
    while(balanceleft<0)
    {
           cout <<  "You do not have enough enough money. Please recharge your meal card"<<endl;
           cout << "Press'1'to recharge. Press '0' to leave:" <<endl; 
           cout<<endl;
           cin >> recharge_choice;
           
           //while loop to check 1 or 0
           while(recharge_choice!=1&&recharge_choice!=0)
           {
              cout << "Please enter '1' or '0':";
              cin >> recharge_choice;
           }
           //if you want to recharge    
           if(recharge_choice==1)
           {
               cout<<"How much money you want to recharge?"<<endl;
               cin>>recharge_money;
               newbalance=recharge_money+balance;
               cout << "You have recharged " << recharge_money << endl;
               cout<<"Now your balance is:"<<newbalance<<endl;
               pause(dummyVariable, "Enter any key to continue . .");
               
               balanceleft=newbalance-totalPrice;

               cout << "Your total price was : " << totalPrice << endl;
               pause(dummyVariable, "Enter any key to continue . .");
           
               cout<< totalPrice << " has been deducted from your account" << endl;
               pause(dummyVariable, "Enter any key to continue . .");
               cout << "Your remaining balance is now " << balanceleft << endl;
               pause(dummyVariable, "Enter any key to continue . .");
               cout<<endl;
               cout << "Thank you for ordering from Buzztime Food Centre!" << endl; 

           } 
           //if you dont want to recharge   
           else if(recharge_choice==0)
           {
              break;
           }
    }
  



      //delete functions
      delete firstBalance;
      delete[] mainArray;
      delete[] drinksArray;
      delete[] dessertArray;
}

//make pause
void pause(string &string_variable, string message)
{
    for (;;) 
    {
        cout << endl << "                                            " << message;
        if (cin >> string_variable) 
        {   
            break;
        } 
        else 
        {
            cout << "Please enter a valid string" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

