class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int num_unique = nums[0];
        vector<int> new_nums;
        new_nums.push_back(nums[0]);
        int k = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != num_unique)
            {
                new_nums.push_back(nums[i]);
                num_unique = nums[i];
                k++;
            }
        }

        nums = new_nums;

        return k;
    }
};