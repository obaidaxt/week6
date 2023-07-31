#include <iostream>
using namespace std;

int main()
{

    int vals[] = {10, 20, 30};

    // Write Your Code Here
    vals[0] *= 10;
    vals[1] *= 10;
    vals[2] *= 10;

    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300
    return 0;
}

// in dart void main()
// {
//     List<int> vals = [ 10, 20, 30 ];

//     // Write Your Code Here
//     vals[0] = 100;
//     vals[1] = 200;
//     vals[2] = 300;

//     print(vals[0]); // 100
//     print(vals[1]); // 200
//     print(vals[2]); // 300
// }
