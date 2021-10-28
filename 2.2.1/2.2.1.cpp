// 2.2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int wordChecker(string word)
{
    if (word == "agent")
    {
        return 0;
    }
    else
    {
        return 10;
    }
}

int main()
{
    string enteredword;

    cout << "Enter word:\n";
    getline(cin, enteredword);

    wordChecker(enteredword);
}