#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> sol;

        for (int i = 1; i <= n; i++)
        {
            if ((i % 3 == 0) && (i % 5 == 0))
            {
                // sol[i - 1] = "FizzBuzz";
                sol.push_back("FizzBuzz");
            }

            else if (i % 3 == 0)
            {
                // sol[i - 1] = "Fizz";
                sol.push_back("Fizz");
            }

            else if (i % 5 == 0)
            {
                // sol[i - 1] = "Buzz";
                sol.push_back("Buzz");
            }

            else
            {
                // sol[i - 1] = to_string(i);
                sol.push_back(to_string(i));
            }
        }

        return sol;
    }
};