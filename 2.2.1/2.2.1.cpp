// 2.2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int wordChecker(string word)
{
    if (word == "agent")
    {
        return 10;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string enteredword;

    cout << "Enter word:\n";
    getline(cin, enteredword);

    cout << wordChecker(enteredword);
}