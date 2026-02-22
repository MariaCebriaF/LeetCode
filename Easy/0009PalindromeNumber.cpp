// Lo intentamos resolver sin pasarlo a strings

class Solution
{
public:
    bool isPalindrome(int x)
    {
        // Vamos a sacar cada decimal y lo vamos a meter en un vector
        if (x < 0)
        {
            return false;
        }

        vector<int> decimal;

        while (x > 0)
        {
            decimal.push_back(x % 10);
            x /= 10;
        }

        int izq = 0;
        int dcha = decimal.size() - 1;

        while (dcha > izq)
        {
            if (decimal[izq] != decimal[dcha])
                return false;

            izq++;
            dcha--;
        }

        return true;
    }
};

/*
Mi primera idea habia sido esta, pero no es optima para nada, pero funcionar, funciona:

         vector<int> copia = decimal;
         reverse(decimal.begin(), decimal.end());

        for(int i = 0 ; i< decimal.size(); i++)
        {
            if( decimal[i] != copia[i])
            {
                return false;
            }
        }
*/