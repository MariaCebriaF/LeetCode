class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";

        string result = strs[0];

        for (int i = 1; i < strs.size(); ++i)
        {

            while (strs[i].find(result) != 0)
            {
                result.pop_back();

                if (result.empty())
                    return "";
            }
        }

        return result;
    }
};