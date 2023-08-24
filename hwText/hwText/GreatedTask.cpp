#include "GreatedTask.h"

GreatedTask::GreatedTask(string text) : Text(text) {}

// Implementation of the displayText() function for GreatedTask
void GreatedTask::displayText() {
    cout << "!!! " << text << endl;
}
