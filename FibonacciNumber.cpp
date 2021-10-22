#include <iostream>
using namespace std;
main()
{
    int i,tempnum=0,terms;
    cout << "Welcome to the Fibonacci Number program!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "The Fibonacci series is 0,1,1, 2, 3, 5, 8... \n Here at 8 the nth term is 7." << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Enter n till which you want the series : ";
    cin >> terms;
    int numlist[terms];
    numlist[0] = 0;
    numlist[1] = 1;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "FIbonacci Series when n = " << terms << " : ";
    for(i=0;i<terms;i++)
    {
        if(i==0)
        {
            cout << numlist[i] << ",";
        }
        else
        {
            if(i != terms-1)
            {
              cout << numlist[i] << ",";
              numlist[i+1] = numlist[i-1] + numlist[i];
            }
            else
            {
              cout << numlist[i] << "." << endl;;
            }

        }
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
