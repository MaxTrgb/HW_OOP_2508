#pragma once
#include "Text.h"

class GreatedTask : public Text
{
public:
    // Constructor for GreatedTask, takes a string parameter 'text'
    GreatedTask(string text);

    // Overriding the displayText() function from the base class
    void displayText() override;
};
