#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << sizeof(nums) / sizeof(nums[0]) << endl;
    // Output: 6

    // Method 2
    cout << sizeof(nums) / sizeof(int) << endl;
    // Output: 6

    // Method 3
    cout << end(nums) - begin(nums) << endl;
    // Output: 6
    return 0;
}
