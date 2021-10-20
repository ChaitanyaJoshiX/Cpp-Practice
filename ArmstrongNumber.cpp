/*
Armstrong number is a number that is equal to the sum of cubes of its digits.
Example : 153 = 1^3 + 5^3 + 3^3

Take number as input.
Check if it is an armstrong number.
Display the appropriate message.

Author : @ChaitanyaJoshiX
*/ 

#include <iostream>
using namespace std;
main()
{
    int n,i,sum=0,temp;
    cout << "Welcome to the Armstrong number program!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter the number you want to check : ";
    cin >> n;
    int checknum = n;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    while(n != 0)
    {
        temp = n % 10;
        sum += (temp*temp*temp);
        n /= 10;
    }

    if(checknum == sum)
    {
        cout << checknum << " is a Armstrong number."<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }
    else
    {
        cout << checknum << " is not a Armstrong number."<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }
}
