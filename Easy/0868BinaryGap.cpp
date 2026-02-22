// Solucion strings, no es muy optima

class Solution
{
public:
    int binaryGap(int n)
    {

        string binario = "";
        while (n > 0)
        {
            binario += to_string(n % 2);
            n /= 2;
        }
        reverse(binario.begin(), binario.end());

        int ult = -1;
        int sol = 0;

        for (int i = 0; i < binario.size(); i++)
        {
            if (binario[i] == '1')
            {
                if (ult != -1)
                    sol = max(sol, i - ult);

                ult = i;
            }
        }
        return sol;
    }
};

// Solucion con bitwise mucho mas optima

class Solution
{
public:
    int binaryGap(int n)
    {
        int ult = -1;
        int sol = 0;
        int pos = 0;

        while (n > 0)
        {
            if (n & 1)
            {
                if (ult != -1)
                    sol = max(sol, pos - ult);

                ult = pos;
            }

            pos++;
            n >>= 1;
        }

        return sol;
    }
};
