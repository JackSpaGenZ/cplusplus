#include <iostream>
#include <vector>
using namespace std;

class problem_01
{
public:
    vector<int> nums;
    vector<int> getvectorNums(vector<int> &nums)
    {
        for (int i = 0; i < 10; i++)
        {
            nums.push_back(i);
        }
        return nums;
    }
    vector<int> runningSum(vector<int> &nums)
    {
        auto i = nums.begin() + 1;
        while (i != nums.end())
        {
            *i += *(i - 1);
            i++;
        }
        return nums;
    }
};

//------------ MAIN -------------------//

#include <iostream>
#include <vector>
#include "problem_01.h"

using namespace std;

int main()
{
    problem_01 vector1;
    problem_01 vector2;

    vector1.nums = vector1.getvectorNums(vector1.nums);
    vector<int> result = vector1.runningSum(vector1.nums);
    auto i = result.begin() + 1;
    cout << "[ ";
    while (1)
    {
        cout << *i;
        i++;
        if (i == result.end())
        {
            break;
        }
        cout << ", ";
    }
    cout << " ]";
}