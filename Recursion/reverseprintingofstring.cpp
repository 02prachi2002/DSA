#include <iostream>
#include <string>
using namespace std;

void printReverseString( string& text, int index) {
    if (index < 0) {
        return;  // Base case: if index is less than 0, return.
    }
    // cout << text[index] << " ";  // Print the character at the current index.
    printReverseString(text, index - 1);  // Recursive call with the next index.
    cout << text[index] << " ";  // Print the character at the current index.
}

int main() {
    string text;
    cout << "Enter the string: ";
    cin >> text;  // Read the string from the user.
    
    int size = text.size();  // Get the size of the string.
    printReverseString(text, size - 1);  // Start recursion from the last index.
    
    return 0;
}
