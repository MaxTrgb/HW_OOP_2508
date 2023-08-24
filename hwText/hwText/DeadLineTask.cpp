#include "DeadLineTask.h"

DeadLineTask::DeadLineTask(string text, int day, int month) : Text(text) {
    this->day = day;       // Initialize the 'day' member variable with the provided 'day' parameter
    this->month = month;   // Initialize the 'month' member variable with the provided 'month' parameter
}

// Implementation of the displayText() function for DeadLineTask
void DeadLineTask::displayText() {
    cout << "Date: " << day << "." << month << " " << text << endl;
}
