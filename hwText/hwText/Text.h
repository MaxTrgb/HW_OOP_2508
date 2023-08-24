#pragma once
#include <iostream>
using namespace std;

class Text
{
protected:
    string text; // Member variable to store the text content
public:
    // Constructor to initialize the 'text' member variable
    Text(string text);

    // Virtual function to display the text content of the task
    virtual void displayText();
};
