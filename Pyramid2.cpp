/*
Display this pattern :

***
 *
* *

*Use nested for only.

Author : @ChaitanyaJoshiX
*/

#include <iostream>
using namespace std;
main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        switch(i)
        {
            case 1:
            for(j=1;j<=3;j++)
            {
                cout << "*";
            }
            cout << endl;
            break;

            case 2:
            for(j=1;j<=3;j++)
            {
                if(j==1 || j==3)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
            break;

            case 3:
            for(j=1;j<=3;j++)
            {
                if(j!=2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
            break;

            default: break;
        }
    }
}

/*
Author : @ChaitanyaJoshiX
*/
