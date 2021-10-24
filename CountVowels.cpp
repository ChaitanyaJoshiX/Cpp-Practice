#include <iostream>
using namespace std;

int CountVowels(string word,int l)
{
    int return_vowels=0,i;
    char temp;
    for(i=0;i<l;i++)
    {
        temp = word[i];
        if(temp =='a'|| temp =='e'|| temp =='i'|| temp =='o'|| temp =='u')
        {
            return_vowels++;
        }
    }
    return return_vowels;
}

main()
{
    string word;
    cout << "Enter a word : ";
    cin >> word;
    int l = word.length();
    int vowels = CountVowels(word,l);
    cout << "There are " << vowels << " vowels in " << word << endl;

}
