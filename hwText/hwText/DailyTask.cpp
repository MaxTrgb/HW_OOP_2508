#include "DailyTask.h"

// Constructor implementation for DailyTask
DailyTask::DailyTask(string text, int hours, int minutes) : Text(text) {
    this->hours = hours;       // Initialize the 'hours' member variable with the provided 'hours' parameter
    this->minutes = minutes;   // Initialize the 'minutes' member variable with the provided 'minutes' parameter
}

// Implementation of the displayText() function for DailyTask
void DailyTask::displayText() {
    cout << "Time: " << hours << ":" << minutes << " " << text << endl;
    // Displays the text content of the DailyTask along with the specified time
}
