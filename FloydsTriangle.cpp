/*
Display Floyd's Traingle till n terms:

1
2 3
4 5 6
7 8 9 10 ...

Use nested for only.

Author : @ChaitanyaJoshiX

*/
#include <iostream>
using namespace std;
main()
{
  int i,j,c=1,rows;
  cout << "Welcome to the Floyd's Triangle program!" << endl;
  cout << "Pattern is :\n1\n2 3\n4 5 6\n7 8 9 10\nTill n terms\nAbove pattern has 4 rows" << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  cout << "Enter number of rows : ";
  cin >> rows;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  for(i=1;i<=rows;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout << c << " ";
      c++;
    }
    cout << endl;
  }
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
