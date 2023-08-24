#pragma once
#include "Text.h"

class DailyTask : public Text
{
private:
    int hours;      // Hours of the task
    int minutes;    // Minutes of the task
public:
    // Constructor for DailyTask, takes a string parameter 'text', and two integer parameters 'hours' and 'minutes'
    DailyTask(string text, int hours, int minutes);

    // Overriding the displayText() function from the base class
    void displayText() override;
};
