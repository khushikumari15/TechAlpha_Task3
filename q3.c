#include <iostream>
#include <string>

using namespace std;

void removeSpaces(string& str) {
    // Iterate through the string
    for (int i = 0; i < str.length(); ++i) {
        // If current character is a space
        if (str[i] == ' ') {
            // Remove the space by shifting characters to the left
            str.erase(i, 1);
            // Since we removed a character, decrement index to check next character
            --i;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string with spaces: ";
    getline(cin, input);

    removeSpaces(input);

    cout << "String after removing spaces: " << input << endl;

    return 0;
}
