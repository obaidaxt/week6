// Example 1
// int vals[] = {100, 200, 600, 200, 100};

// Output
// "Array Is Palindrome"

// Example 2
// int vals[] = {100, 200, 200, 100};

// Output
// "Array Is Palindrome"

// Example 3
// int vals[] = {100, 300, 600, 200, 100};

// Output
// "Array Is Not Palindrome"
#include <iostream>
using namespace std;

int main()
{
    // Example 1

    int vals[] = {100, 200, 600, 200, 100};

    if (vals[0] == vals[4])
    {
        cout << "Array Is Palindrome" << endl;
    }
    // Example 2

    int vals[] = {100, 200, 200, 100};
    if (vals[1] == vals[3])
    {
        cout << "Array Is Palindrome" << endl;
    }
    // Example 3
    int vals[] = {100, 300, 600, 200, 100};
    if (vals[1] != vals[3])
    {
        cout << "Array Is not Palindrome" << endl;
    }

    return 0;
}
