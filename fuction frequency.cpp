#include <iostream>
#include <cstring>
#include <cctype>  // Required for isalpha() and tolower()

using namespace std;

int main() {
    char str[100];
    int freq[26] = {0};  // Array to store frequencies of characters a-z

    cout << "Enter a string: ";
    cin.getline(str, 100);  // Get the full string including spaces

    // Traverse through each character of the string
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {  // Check if the character is alphabetic
            char ch = tolower(str[i]);  // Convert character to lowercase
            int idx = ch - 'a';  // Calculate the index (0 for 'a', 1 for 'b', etc.)
            freq[idx]++;  // Increment frequency count for this character
        }
    }

    // Display the character frequencies
    cout << "Character frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {  // Only print characters that appeared in the string
            cout << char(i + 'a') << " -> " << freq[i] << endl;
        }
    }

    return 0;
}
