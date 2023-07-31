#include <iostream>
using namespace std;

int main()
{
    string fName = "El Zero";
    string mName = "Web";
    string lName = "School";

    // Method 1: Using a single cout statement
    cout << fName << " " << mName << " " << lName << endl;

    // Method 2: Using separate cout statements
    cout << fName << " ";
    cout << mName << " ";
    cout << lName << endl;

    // Method 3: Concatenating strings with "+"
    string fullName = fName + " " + mName + " " + lName;
    cout << fullName << endl;

    return 0;
}
