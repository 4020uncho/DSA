#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;  // stores indices

        for (int i = 0; i < n; i++) {
            while (!st.empty() && prices[i] <= prices[st.top()]) {
                prices[st.top()] -= prices[i];
                st.pop();
            }
            st.push(i);
        }
        return prices;
    }
};
int main() {
    Solution sol;
    vector<int> prices = {8, 4, 6, 2, 3};

    vector<int> result = sol.finalPrices(prices);

    for (int price : result) {
        cout << price << " ";
    }
    return 0;
}
