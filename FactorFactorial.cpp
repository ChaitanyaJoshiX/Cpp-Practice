#include <iostream>
using namespace std;

void Factorial(int num)
{
  int i;
  int factorial = 1;
  for(i=num;i>0;i--)
  {
    factorial *= i;
  }
  cout << "The factorial of " << num << " is = " << factorial <<endl;
}

void Factors(int num)
{
  int i;
  cout << "Factors of " << num << " are : {";
  for(i=1;i<=num;i++)
  {
    if(num % i == 0)
    {
      if(i != num)
      {
        cout << i << ",";
      }
      else
      {
        cout << i;
      }
    }
  }
  cout << "}" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

main()
{
  int choice,num;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "Welcome to the Factor & Factorial Program!" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "\t\tMenu" << endl;
  cout << "1. Factorial\n2. Factors" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "Enter your choice : ";
  cin >> choice;
  cout << "Enter your number : ";
  cin >> num;
  switch(choice)
  {
    case 1: // Finding Factorial.
    Factorial(num);
    break;

    case 2: // Finding Factors.
    Factors(num);
    break;

    default: cout << "Invalid choice. ONLY(1/2) !!!";
    break;
  }

}
