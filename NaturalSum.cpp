/*
WAP to print first n Natural numbers and their sum.
Take n as an input.
*/
#include <iostream>
using namespace std;
main()
{
  int lim,i = 1;
  int sum = 0;
  cout << "Enter n terms : ";
  cin >> lim;

  do // Using a do while loop to excecute till counter reaches limit.
  {
    cout << i << endl;
    sum += i;
    i++;
  } while(i <= lim);

  cout << "Sum = " << sum << endl;
}
