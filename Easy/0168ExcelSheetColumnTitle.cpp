class Solution
{
public:
    string convertToTitle(int columnNumber)
    {

        string sol;

        while (columnNumber > 0)
        {

            columnNumber--;

            int letra = columnNumber % 26;

            char c = 'A' + letra;

            sol.push_back(c);

            columnNumber /= 26;
        }

        reverse(sol.begin(), sol.end());
        return sol;
    }
};