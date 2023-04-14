#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> nums;
    void getvectorNums(vector<int> &nums)
    {
        int n = 0;
        cout << "Nhap so luong phan tu : ";
        cin >> n;
        cout << "\n";
        int i = 0;
        for (; n > 0; n--)
        {
            cin >> i;
            nums.push_back(i);
        }
        cout << "\n";
    }
    int pivotIndex(vector<int> &nums)
    {
        int n = 0;
        int sumRight = 0;
        int sumLeft = 0;

        for (auto i = nums.begin() + 1; i < nums.end(); i++)
        {
            sumRight += *i;
        }
        auto i = nums.begin() + 1;
        while (sumRight != sumLeft)
        {
            if (i == nums.end())
            {
                break;
            }

            n++;
            sumRight -= *(i);
            sumLeft += *(i - 1);
            i++;
        }
        if (sumRight != sumLeft)
        {
            n = -1;
        }
        return n;
    }
};


//----------MAIN-------------//

// #include <iostream>
// #include <vector>
// #include "problem_02.h"

// using namespace std;

// int main()
// {
//     Solution vector1;
//     vector1.getvectorNums(vector1.nums);
//     vector<int> result = vector1.nums;
//     auto i = result.begin();
//     cout << "[ ";
//     while (1)
//     {
//         cout << *i;
//         i++;
//         if (i == result.end())
//         {
//             break;
//         }
//         cout << ", ";
//     }
//     cout << " ]";
//     cout << "\n"
//          << "Pivot Index : " << vector1.pivotIndex(vector1.nums);
// }