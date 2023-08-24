#include "Text.h"

Text::Text(string text) {
    this->text = text;
    // Initializes the 'text' member variable with the provided 'text' parameter
}

// Implementation of the displayText() function for the Text class
void Text::displayText() {
    cout << text << endl;
}
