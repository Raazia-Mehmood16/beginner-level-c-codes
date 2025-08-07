//String Multiple Functions code 
// Qno 3 

#include<iostream>
#include<cstring>
using namespace std;

int slength(const char*);
int compare(const char*, const char*);
int my_strncmp(const char*, const char*, int);
void display_comp_res(int, const char*, const char*);
char* copy(char*, const char*);
char* my_strncpy(char*, const char*, int);
char* my_strcat(char*, const char*);
char* my_strncat(char*, const char*, int);

int main() {
    char s[100];  // Max length 100
    cout << "Enter a string: ";
    cin.getline(s, 100);  // Reads full line input
    cout << "Hello, the length of your input is: " << slength(s) << endl;

    // Compare strings 
    char s1[100], s2[100];
    char temp1[100], temp2[100]; // Temporary arrays to store base addresses
    cout << "Enter Ist String: ";
    cin.getline(s1, 100);
    cout << "Enter 2nd String: ";
    cin.getline(s2, 100);
    copy(temp1, s1);//stored s1 into temp1
    copy(temp2, s2);//stored s2 into temp2

    // Result of comparison 
    int result = compare(s1, s2);
    display_comp_res(result, s1, s2);

    // strncmp
    int n;
    cout << "Enter number n for strncp / strncmp / strncat: ";
    cin >> n;
    result = my_strncmp(s1, s2, n);
    display_comp_res(result, s1, s2);

    // String copy
    cout << "Result of Copied String is: " << copy(s1, s2) << endl;
    cout << "Result of Copied String by strncpy is: " << my_strncpy(s1, s2, n) << endl;
    cin.ignore();
    
    copy(s1,temp1); // Restore s1
    copy(s2, temp2); // Restore s2
    // String concatenation
    cout << "Result of String Concatenation is: " << my_strcat(s1,s2) << endl;
    copy(s1,temp1); // Restore s1
    copy(s2,temp2); // Restore s2

    cout << "Result of String Concatenation by strncat is: " << my_strncat(s1,s2, n) << endl;

    return 0;
}

// Find string length
int slength(const char* s) {
    int l = 0;
    while (*s) {
        l++;
        s++;
    }
    return l;
}

// Compare strings 
int compare(const char* s1, const char* s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2) {
            return (*s1 > *s2) ? 1 : -1;
        }
        s1++;
        s2++;
    }
    if (*s1 || *s2) {
        return (*s1) ? 1 : -1;
    }
    return 0;
}

// Compare n characters of two strings
int my_strncmp(const char* s1, const char* s2, int n) {
    while (n && *s1 && (*s1 == *s2)) {
        s1++;
        s2++;
        n--;
    }
    return n == 0 ? 0 : (*(unsigned char*)s1 - *(unsigned char*)s2);
}

// Display comparison result
void display_comp_res(int r, const char* s1, const char* s2) {
    if (r == 0) {
        cout << "S1 \"" << s1 << "\" and S2 \"" << s2 << "\" are equal.\n";
    }
    else if (r > 0) {
        cout << "S1 \"" << s1 << "\" is greater than S2 \"" << s2 << "\".\n";
    }
    else {
        cout << "S1 \"" << s1 << "\" is smaller than S2 \"" << s2 << "\".\n";
    }
}

// Copy strings
char* copy(char* dest, const char* src) {
    char* ptr = dest;
    while (*src) {
        *ptr++ = *src++;
    }
    *ptr = '\0';  // Null terminate dest string
    return dest;
}

// strncpy - Copy part of a string
char* my_strncpy(char* dest, const char* src, int n) {
    char* ptr = dest;
    while (n-- && (*src)) {
        *ptr++ = *src++;
    }
    *ptr = '\0';  // Null terminate
    return dest;
}

// strcat - Concatenate two strings
char* my_strcat(char* dest, const char* src) {
    char* ptr = dest;
    while (*ptr) ptr++; // Move to end of dest
    while ((*ptr++ = *src++)); // Copy src
    return dest;
}

// strncat - Concatenate one string with part of another
char* my_strncat(char* dest, const char* src, int n) {
    char* ptr = dest;
    while (*ptr) ptr++; // Move to end of dest
    while (n && *src) {
        *ptr++ = *src++;
        n--;//decrease n
    }
    *ptr = '\0';  // Null terminate
    return dest;
}
