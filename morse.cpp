#include <iostream>
#include <map>
#include <string>
#include <cctype>
using namespace std;


int main() {
    // Morse code dictionary
// Tested with: The quick brown fox jumps over the lazy dog

    map<char, string> morse = {
        {'A', ".-"},   {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
        {'E', "."},    {'F', "..-."}, {'G', "--."},  {'H', "...."},
        {'I', ".."},   {'J', ".---"}, {'K', "-.-"},  {'L', ".-.."},
        {'M', "--"},   {'N', "-."},   {'O', "---"},  {'P', ".--."},
        {'Q', "--.-"}, {'R', ".-."},  {'S', "..."},  {'T', "-"},
        {'U', "..-"},  {'V', "...-"}, {'W', ".--"},  {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."}
    };
// Tested with: Hard working students reap their rewards

    string message;
    cout << "Enter a message: ";
    getline(cin, message);

    string fullMorse = "";

    for (char c : message) {
        if (isalpha(c)) {
            char upper = toupper(c);
            cout << upper << ": " << morse[upper] << endl;
            fullMorse += morse[upper] + "   "; // 3 spaces between letters
        } else if (c == ' ') {
            fullMorse += "       "; // 7 spaces between words
        }
    }

    cout << "\nFull Morse code with spaces:\n" << fullMorse << endl;

    return 0;
}
