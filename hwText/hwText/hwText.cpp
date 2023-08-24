#include <iostream>
using namespace std;
#include "Text.h"
#include "GreatedTask.h"
#include "DeadLineTask.h"
#include "DailyTask.h"

int main()
{
    // Creating an array of pointers to base class Text
    Text* all[5];

    // Creating instances of different task types using dynamic memory allocation
    all[0] = new Text("Simple task");                // Base Text task
    all[1] = new GreatedTask("Important task");      // Subclass of Text - GreatedTask
    all[2] = new DeadLineTask("Urgent task", 26, 8); // Subclass of Text - DeadLineTask
    all[3] = new DailyTask("Daily task", 10, 30);    // Subclass of Text - DailyTask
    all[4] = new DailyTask("Second daily task", 15, 50);

    // Printing header for the to-do list
    cout << "To-Do List:\n" << endl;

    // Looping through the array to display details of each task
    for (int i = 0; i < 5; i++)
    {
        all[i]->displayText(); // Using polymorphism to call the appropriate displayText() method
    }

    // Freeing the dynamically allocated memory to prevent memory leaks
    for (int i = 0; i < 5; i++)
    {
        delete all[i];
    }

    return 0;
}
