class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int cont = 0;
        int max_cont = 0;
        int anterior = 0;
        if (nums.size() > 1)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if ((nums[i] == 1) && (anterior == 1))
                {
                    cont++;
                    anterior = 1;
                    if (cont > max_cont)
                    {
                        max_cont = cont;
                    }
                }

                else if (nums[i] == 1)
                {
                    cont++;
                    anterior = 1;
                    if (cont > max_cont)
                    {
                        max_cont = cont;
                    }
                }

                else
                {
                    anterior = 0;
                    cont = 0;
                }
            }
        }

        else
        {

            if (nums[0] == 1)
            {
                return 1;
            }

            else
            {
                return 0;
            }
        }

        return max_cont;
    }
};