class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.empty())
        {
            return 0;
        }
        int best_profit = 0;
        int min_price = prices[0];
        int idx = 0;

        if (prices.size() == 1)
        {
            return 0;
        }

        for (int i = 1; i < prices.size(); i++)
        {
            if ((prices[i] - min_price) > best_profit)
            {
                best_profit = prices[i] - min_price;
                idx = i;
            }

            else if (prices[i] < min_price)
            {
                min_price = prices[i];
            }
        }

        return best_profit;
    }
};