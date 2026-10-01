#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int size = nums.size();
        vector<int> sol;
        sol.push_back(nums[0]);
        for (int i = 1; i < size; i++)
        {
            sol.push_back(sol[i - 1] + nums[i]);
        }

        return sol;
    }
};