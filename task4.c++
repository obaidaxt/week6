#include <iostream>
using namespace std;

int main()
{
    int vals[]{100, 200, 250, 400, 200};
    if (vals[0] + vals[4] > vals[2])
    {
        cout << "First Number + Last Number Is Larger than Middle Number" << endl;
    }
    if (vals[1] + vals[3] > vals[2])
    {
        cout << "second Number + Before Last Number Is Larger than Middle Number" << endl;
    }
    else{
        ("Middle Number Is The Largest")
    }
        
        return 0;
}

// // Example 1
// int vals[]{100, 200, 250, 400, 200};

// // Needed Output
// "First Number + Last Number Is Larger Than Middle Number"
// "100 + 200 = 300"
// "300 > 250"

//     // Example 2
//     int vals[]{100, 200, 500, 400, 200};

// // Needed Output
// "Second Number + Before Last Number Is Larger Than Middle Number"
// "200 + 400 = 600"
// "600 > 500"

//     // Example 3
//     int vals[]{100, 200, 600, 400, 200};

// // Needed Output
// "Middle Number Is The Largest"
// "600"