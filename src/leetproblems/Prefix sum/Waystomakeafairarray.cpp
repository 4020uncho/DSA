//This was a bit complex problem involving prefix sums and careful index management so little help from ai was taken
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return n;  // 0→0 ways? but usually n>=1, empty is fair

        vector<int> even(n + 1, 0);
        vector<int> odd(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            even[i + 1] = even[i] + (i % 2 == 0 ? nums[i] : 0);
            odd[i + 1]  = odd[i]  + (i % 2 == 1  ? nums[i] : 0);
        }

        int count = 0;

        for (int i = 0; i < n; ++i) {
            int evenLeft = even[i];               // even sum before i
            int oddLeft  = odd[i];                // odd sum before i

            int evenRight = even[n] - even[i + 1]; // even sum strictly after i
            int oddRight  = odd[n]  - odd[i + 1];  // odd sum strictly after i

            // After removal → right part flips parity
            int newEven = evenLeft + oddRight;
            int newOdd  = oddLeft  + evenRight;

            if (newEven == newOdd) {
                count++;
            }
        }

        return count;
    }
};