#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;
 main()
{
    string name;
    cout << "Enter your full name : ";
    getline(cin, name);
    name += " ";
    int l = name.length();
    int space = name.find(' ');
    int lastspace = name.find_last_of(' ');
    string firstname =  name.substr(0,space+1);
    string lastname = name.substr(space+1,lastspace);
    cout << "First name : " << firstname << endl;
    cout << "Last name : " << lastname << endl;
}
