class Solution
{
public:
    int romanToInt(string s)
    {
        int num = 0;
        for (int i = 1; i <= s.size(); i++)
        {
            if (s[i - 1] == 'I' && s[i] == 'V')
            {
                num += 4;
                i++;
            }

            else if (s[i - 1] == 'I' && s[i] == 'X')
            {
                num += 9;
                i++;
            }

            else if (s[i - 1] == 'C' && s[i] == 'M')
            {
                num += 900;
                i++;
            }

            else if (s[i - 1] == 'X' && s[i] == 'C')
            {
                num += 90;
                i++;
            }

            else if (s[i - 1] == 'X' && s[i] == 'L')
            {
                num += 40;
                i++;
            }

            else if (s[i - 1] == 'C' && s[i] == 'D')
            {
                num += 400;
                i++;
            }

            else if (s[i - 1] == 'I')
            {
                num++;
            }
            else if (s[i - 1] == 'V')
            {
                num += 5;
            }

            else if (s[i - 1] == 'X')
            {
                num += 10;
            }

            else if (s[i - 1] == 'C')
            {
                num += 100;
            }

            else if (s[i - 1] == 'M')
            {
                num += 1000;
            }

            else if (s[i - 1] == 'D')
            {
                num += 500;
            }

            else if (s[i - 1] == 'L')
            {
                num += 50;
            }
        }

        return num;
    }
};