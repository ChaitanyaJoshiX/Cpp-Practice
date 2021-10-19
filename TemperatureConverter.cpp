/*
This program converts Celsius to Fahrenheit and vice versa.
Takes value as input.
Displays result by calling the appropriate function.
Author : @ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

void CelToFahren(float temp)
{
  float convtemp = (temp * 9/5) + 32;
  cout << "Answer = " << convtemp << " deg F\n";
  cout << "Thank you for runnning my program!";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

void FahrenToCel(float temp)
{
  float convtemp = (temp - 32) * 5/9;
  cout << "Answer = " << convtemp << " deg C\n";
  cout << "Thank you for runnning my program!";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

main()
{
  int choice;
  float temp;
  cout << "Welcome to the temperature converter !\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "\t\tMenu\n";
  cout << "1 : Celsius to Fahrenheit\n2 : Fahrenheit to Celsius\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "Which function one would you like to use (1/2) ? : ";
  cin >> choice;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

  //Checking for choice among functions.
  switch (choice)
  {
    case 1 : cout << "Enter the temperature in deg C : ";
    cin >> temp; //Gathering temperature in Celsius as input.
    CelToFahren(temp); //Calling CelToFahren function.
    break;

    case 2 : cout << "Enter the temperature in deg F : ";
    cin >> temp; //Gathering temperature in Fahrenheit as input.
    FahrenToCel(temp); //Calling CelToFahren function.
    break;

    default : cout << "Invalid choice."; //If choice is out of bounds.
    break;
  }
}
