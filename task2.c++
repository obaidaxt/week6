#include <iostream>
using namespace std;

int main()
{
    int check = 25;
    int nums[] = {40, 20, 30, 70, 100};

    int first = nums[0];
    int second = nums[1];
    int third = nums[2];
    int last = nums[3];

    if (first > check)
    {
        cout << "{" << first << "} + {" << last << "} = " << first + last << endl;
    }

    if (second > check)
    {
        cout << "{" << second << "} + {" << last << "} = " << second + last << endl;
    }

    if (third > check)
    {
        cout << "{" << third << "} + {" << last << "} = " << third + last << endl;
    }

    return 0;
}


// in adrt
// void main()
// {
//     int check = 25;
//     List<int> nums = [ 40, 20, 30, 70, 100 ];
//     int last = nums[nums.length - 2];

//     if (nums[0] > check)
//     {
//         print("{${nums[0]}} + {$last} = ${nums[0] + last}");
//     }

//     if (nums[1] > check)
//     {
//         print("{${nums[1]}} + {$last} = ${nums[1] + last}");
//     }

//     if (nums[2] > check)
//     {
//         print("{${nums[2]}} + {$last} = ${nums[2] + last}");
//     }
// }
