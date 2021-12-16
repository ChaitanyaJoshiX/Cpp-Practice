/*
This calculator asks for two numbers as input.
The following functions can be performed with the above:
1. Addition
2. Subtraction
3. Multiplication
4. Division
6. Percentage
GitHub : @ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;

void Add(double num1, double num2)
{
  cout << "Answer = " << (num1 + num2) << "\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~";
}

void Subtract(double num1, double num2)
{
  cout << "Answer = " << (num1 - num2) << "\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~";
}

void Multiply(double num1, double num2)
{
  cout << "Answer = " << (num1 * num2) << "\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~";
}

void Divide(double num1, double num2)
{
  cout << "Answer = " << (num1 / num2) << "\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~";
}

void checkChoice(int choice, double num1, double num2)
{
  if (choice == 1)
  {
    Add(num1, num2);
  }

  else if (choice == 2)
  {
    Subtract(num1, num2);
  }

  else if (choice == 3)
  {
    Multiply(num1, num2);
  }

  else if (choice == 4)
  {
    Divide(num1, num2);
  }

  else
  {
    cout << "Invalid choice.\n";
    cout << "~~~~~~~~~~~~~~~~~";
  }
}

main()
{
  int choice;
  double num1, num2;
  cout << "Welcome to the simple calculator !\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "\t\tMenu\n";
  cout << "1 : Addition\n2 : Subtraction\n3 : Multiplication\n4 : Division\n";
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "Which function one would you like to use ? : ";
  cin >> choice;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout << "Enter number 1 : ";
  cin >> num1;
  cout << "Enter number 2 : ";
  cin >> num2;
  num1 = double(num1);
  num2 = double(num2);
  checkChoice(choice, num1, num2);
}
//GitHub : @ChaitanyaJoshiX
