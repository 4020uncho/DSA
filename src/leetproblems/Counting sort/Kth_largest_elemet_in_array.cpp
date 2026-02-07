#include <vector>
#include <algorithm>    
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
          int minVal = *min_element(nums.begin(), nums.end());
    int maxVal = *max_element(nums.begin(), nums.end());

    int range = maxVal - minVal + 1;
    vector<int> count(range, 0);

    // Count frequencies
    for (int num : nums) {
        count[num - minVal]++;
    }

    // Traverse from largest to smallest
    for (int i = range - 1; i >= 0; i--) {
        k -= count[i];
        if (k <= 0) {
            return i + minVal;
        }
    }

    return -1; 
    }
};