// 2.2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int wordChecker(string word)
{
    if (word == "agent") //Check word
    {
        return 10; //Return value
    }
    else
    {
        return 0;
    }
}

int main()
{
    string enteredword;

    cout << "Enter word:\n"; //Get word
    getline(cin, enteredword);

    cout << wordChecker(enteredword); //Run function
}