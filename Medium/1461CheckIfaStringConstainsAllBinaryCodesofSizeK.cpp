// La solucion optima
class Solution
{
public:
    bool hasAllCodes(string s, int k)
    {
        int n = (int)s.size();
        if (n < k)
            return false;

        unordered_set<string> encontrados;
        for (int i = 0; i <= n - k; i++)
        {
            encontrados.insert(s.substr(i, k));
            if ((int)encontrados.size() == (1 << k))
                return true;
        }
        return (int)encontrados.size() == (1 << k);
    }
};

// La primera solucion que subi, pero mal, Time Limit Exceeded :)
class Solution
{
public:
    bool hasAllCodes(string s, int k)
    {

        //  Precomputar todas las combinaciones posibles con k
        vector<string> compu;
        int total = 1 << k;

        for (int numero = 0; numero < total; numero++)
        {
            string binario = "";
            for (int bit = k - 1; bit >= 0; bit--)
            {
                if ((numero & (1 << bit)) != 0)
                {
                    binario += '1';
                }

                else
                {
                    binario += '0';
                }
            }
            compu.push_back(binario);
        }

        //  Sliding window
        unordered_set<string> encontrados;

        int n = (int)s.size();
        if (n < k)
            return false;

        for (int i = 0; i <= n - k; i++)
        {
            string tamk = s.substr(i, k);
            encontrados.insert(tamk);
        }

        for (int i = 0; i < (int)compu.size(); i++)
        {
            if (encontrados.find(compu[i]) == encontrados.end())
            {
                return false;
            }
        }

        return true;
    }
};