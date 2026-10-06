class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int ceros = 0;
        for (int i = 0; i < nums.size() - ceros; i++)
        {
            if (nums[i] == 0)
            {
                nums.push_back(0);
                nums.erase(nums.begin() + i);
                i--;
                ceros++;
            }
        }
    }
};