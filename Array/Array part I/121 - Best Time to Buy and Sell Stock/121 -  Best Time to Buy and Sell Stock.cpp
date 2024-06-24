#include <vector>
#include <utility>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = INT_MIN;
        int min_cost = INT_MAX;
        for(int i=0; i < prices.size(); i++){
            min_cost = min(min_cost,prices[i]);
            max_profit = max(max_profit, prices[i]-min_cost);
        }
        return max_profit;
    }
};

int main() {

    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<s.maxProfit(prices);
    return 0;
}