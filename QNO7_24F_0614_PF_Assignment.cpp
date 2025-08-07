#include <iostream>

using namespace std;

int main() {
    char n1, n2, n3, n4, n5; // Input characters
    cout<<endl;
    cout << "Enter EXCATLY 5 characters: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
     // Check for valid input length
    if (!cin) {
        cout << "Error: SORRY!!! <<endl<<Your INPUT is not EXCAT 5 characters." << endl;
    }
else 
    {
    if (n1 >= 'A' && n1 <= 'Z') {
        //  Shift by ASCII value -3 and reverse it also
        char d1 = n1 - 3; // Shift first character by -3
        char d2 = n2 - 3; // Shift second character by -3
        char d3 = n3 - 3; // Shift third character by -3
        char d4 = n4 - 3; // Shift fourth character by -3
        char d5 = n5 - 3; // Shift fifth characterby -3

        // Display decrypted characters inreverse order
        cout << "Decrypted Message: " << d5 << d4 << d3 << d2 << d1 << endl;

    } else if (n1 >= 'a' && n1 <= 'z') //if 1 letter is in lower case
       {
        //  Vowel replacement 
        char d1 = (n1 == 'a') ?'e':(n1 == 'e') ? 'i' :(n1 == 'i') ? 'o' :(n1 == 'o') ? 'u' :(n1 == 'u') ? 'a' : n1;

        char d2 = (n2 == 'a') ? 'e': (n2 == 'e') ? 'i' :(n2 == 'i') ?'o':(n2 == 'o') ? 'u' :(n2 == 'u') ? 'a': n2;

        char d3 = (n3 == 'a') ? 'e' :(n3 == 'e') ? 'i' :(n3 == 'i') ? 'o' :(n3 == 'o') ? 'u' :(n3 == 'u') ? 'a' : n3;

        char d4 = (n4 == 'a') ? 'e' :(n4 == 'e') ? 'i' :(n4 == 'i') ? 'o' : (n4 == 'o') ? 'u':(n4 == 'u') ? 'a' : n4;

        char d5 = (n5 == 'a') ? 'e' :(n5 == 'e') ? 'i' :(n5 == 'i') ? 'o' :(n5 == 'o') ? 'u' :(n5 == 'u') ? 'a' : n5;

        // Swap case for each character from lowe to hrigher & higher to lower using ASCII
        d1 = (d1 >= 'a' && d1 <= 'z') ? (d1 - 'a' + 'A') : (d1 >= 'A' && d1 <= 'Z') ? (d1 - 'A' + 'a') : d1;
        d2 = (d2 >= 'a' && d2 <= 'z') ? (d2 - 'a' + 'A') : (d2 >= 'A' && d2 <= 'Z') ? (d2 - 'A' + 'a') : d2;
        d3 = (d3 >= 'a' && d3 <= 'z') ? (d3 - 'a' + 'A') : (d3 >= 'A' && d3 <= 'Z') ? (d3 - 'A' + 'a') : d3;
        d4 = (d4 >= 'a' && d4 <= 'z') ? (d4 - 'a' + 'A') : (d4 >= 'A' && d4 <= 'Z') ? (d4 - 'A' + 'a') : d4;
        d5 = (d5 >= 'a' && d5 <= 'z') ? (d5 - 'a' + 'A') : (d5 >= 'A' && d5 <= 'Z') ? (d5 - 'A' + 'a') : d5;

        // Output the decrypted message
        cout << "Decrypted message: " << d1 << d2 << d3<< d4 << d5 << endl;
        } 
        else if(n1>=0&& n1<=9){
        cout<<" Sorry!! First letter must be a LETTER!!";}
        else {
        cout << "Error: Invalid input. Only letters and digits are allowed." << endl;
               }
         }
    cout<<endl;
    return 0; 
    }
