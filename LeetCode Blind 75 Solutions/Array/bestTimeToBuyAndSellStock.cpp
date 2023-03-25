#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initialise minimum price and maximum profit
        int min_price = INT_MAX;
        int max_profit = 0;
        
        for (int price : prices) {
            // Update minimum price
            min_price = min(min_price, price);
            // Update maximum profit if higher profit available
            max_profit = max(max_profit, price - min_price);
        }
        
        // Return maximum profit
        return max_profit;
    }
};

