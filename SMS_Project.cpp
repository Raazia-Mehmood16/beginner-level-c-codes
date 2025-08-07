
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// Admin Functions
void addTeacher() {
    string teacherID, name, subject;
    ofstream outFile("teachers.txt", ios::app);
    cout << "Enter Teacher ID: ";
    cin >> teacherID;
    cout << "Enter Teacher Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Subject: ";
    getline(cin, subject);
    outFile << teacherID << "," << name << "," << subject << endl;
    outFile.close();
    cout << "Teacher added successfully!" << endl;
}

void deleteTeacher() {
    string teacherID, line;
    ifstream inFile("teachers.txt");
    ofstream tempFile("temp.txt");
    cout << "Enter Teacher ID to delete: ";
    cin >> teacherID;
    bool found = false;
    while (getline(inFile, line)) {
        if (line.find(teacherID) == string::npos) {
            tempFile << line << endl;
        } else {
            found = true;
        }
    }
    inFile.close();
    tempFile.close();
    remove("teachers.txt");
    rename("temp.txt", "teachers.txt");
    if (found)
        cout << "Teacher deleted successfully!" << endl;
    else
        cout << "Teacher not found!" << endl;
}

// Teacher Functions
void addStudent() {
    string studentID, name, classSection;
    ofstream outFile("students.txt", ios::app);
    cout << "Enter Student ID: ";
    cin >> studentID;
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Class Section: ";
    getline(cin, classSection);
    outFile << studentID << "," << name << "," << classSection << endl;
    outFile.close();
    cout << "Student added successfully!" << endl;
}

void deleteStudent() {
    string studentID, line;
    ifstream inFile("students.txt");
    ofstream tempFile("temp.txt");
    cout << "Enter Student ID to delete: ";
    cin >> studentID;
    bool found = false;
    while (getline(inFile, line)) {
        if (line.find(studentID) == string::npos) {
            tempFile << line << endl;
        } else {
            found = true;
        }
    }
    inFile.close();
    tempFile.close();
    remove("students.txt");
    rename("temp.txt", "students.txt");
    if (found)
        cout << "Student deleted successfully!" << endl;
    else
        cout << "Student not found!" << endl;
}

// Student Functions
void viewGrades() {
    // Example function to display grades (incomplete)
    cout << "Displaying grades..." << endl;
}

void viewCGPA() {
    // Example function to display CGPA (incomplete)
    cout << "Displaying CGPA..." << endl;
}

int main() {
    int role, choice;
    cout << "Select Role: 1. Admin 2. Teacher 3. Student" << endl;
    cin >> role;

    if (role == 1) {
        cout << "Admin Menu: 1. Add Teacher 2. Delete Teacher" << endl;
        cin >> choice;
        if (choice == 1)
            addTeacher();
        else if (choice == 2)
            deleteTeacher();
    } else if (role == 2) {
        cout << "Teacher Menu: 1. Add Student 2. Delete Student" << endl;
        cin >> choice;
        if (choice == 1)
            addStudent();
        else if (choice == 2)
            deleteStudent();
    } else if (role == 3) {
        cout << "Student Menu: 1. View Grades 2. View CGPA" << endl;
        cin >> choice;
        if (choice == 1)
            viewGrades();
        else if (choice == 2)
            viewCGPA();
    }
    return 0;
}
