class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int n = columnTitle.size();
        int sol = 0;

        for (int i = 0; i < n; i++)
        {
            char letra = columnTitle[i];
            int val = letra - 'A' + 1;
            sol = sol * 26 + val;
        }

        return sol;
    }
};