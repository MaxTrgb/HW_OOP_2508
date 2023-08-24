#pragma once
#include "Text.h"

class DeadLineTask : public Text
{
private:
    int day;    // Day of the deadline
    int month;  // Month of the deadline
public:
    // Constructor for DeadLineTask, takes a string parameter 'text' and two integer parameters 'day' and 'month'
    DeadLineTask(string text, int day, int month);

    // Overriding the displayText() function from the base class
    void displayText() override;
};
