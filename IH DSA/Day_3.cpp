#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxP = 0;
    int l = 0, r = 0;

    while (r < prices.size())
    {
        if (prices[r] > prices[l])
        {
            maxP = max(maxP, prices[r] - prices[l]);
        }
        else
        {
            l = r;
        }
        ++r;
    }
    return maxP;
}

int main() {
    vector<int> stockPrices = {7, 1, 5, 3, 6, 4};
    int result = maxProfit(stockPrices);

    cout << "The maximum profit is: " << result << endl;

    return 0;
}