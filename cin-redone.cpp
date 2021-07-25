#include <limits>
#include <iostream>
#include <string>
#include<stdio.h>
using namespace std;

void choice_check(int &int_variable)
{
    for (;;) 
    {
        if (cin >> int_variable) 
        {   
            if (int_variable >= 0)
            {
                if (int_variable <= 5)
                {
                    break;
                } 
                else
                {
                    cout << "Please enter a value less than or equal to five." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            else
            {
                cout << "Please enter a positive number" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } 
        else 
        {
            cout << "Please enter a valid integer" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}



void quantity_check(int &int_variable)
{
    for (;;) 
    {
        if (cin >> int_variable) 
        {   
            if (int_variable >=0)
            {
                if (int_variable <= 10)
                {
                    break;
                } 
                else
                {
                    cout << "Please enter a value less than or equal to ten." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            else
            {
                cout << "Please enter a positive number" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } 
        else 
        {
            cout << "Please enter a valid integer" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

