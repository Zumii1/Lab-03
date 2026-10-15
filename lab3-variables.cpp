// Lab 03 - Variables, Data Types & Input/Output in C++
// Student : Zumran Zia Rono (25239)
// Mentor  : Ma'am Fariyaal

/*
   Task 2 - Concepts explained (multi-line comment):

   1. Variable : A named memory location used to store data that can
                 change while the program is running.
                 Example: int age = 20;

   2. cin      : Standard input stream of iostream. It takes input
                 from the user (keyboard) using the >> operator.

   3. cout     : Standard output stream of iostream. It displays
                 output on the screen using the << operator.
*/

#include <iostream>   // for cin and cout
#include <string>     // for string data type
using namespace std;

int main() {
    // Variable declarations (single-line comment)
    string name;         // stores student name
    int age;             // stores age
    float gpa;           // stores GPA
    string department;   // stores department (Task 3)
    int birthYear;       // stores calculated birth year (Task 4)

    // Taking input from the user using cin
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter GPA: ";
    cin >> gpa;
    cout << "Enter department: ";
    cin >> department;

    // Task 4: calculate birth year
    birthYear = 2026 - age;

    // Displaying output line by line using cout
    cout << endl;
    cout << "Student Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;
    cout << "Birth Year: " << birthYear << endl;

    return 0;
}
