class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> sol;
        int size = nums.size();
        int idx = size * 2;
        for (int i = 0; i < idx; i++)
        {
            int index = i % size;
            int num = nums[index];
            sol.push_back(num);
        }
        return sol;
    }
};