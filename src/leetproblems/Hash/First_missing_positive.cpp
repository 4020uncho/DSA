#include <vector>
#include <algorithm>

int firstMissingPositive(std::vector<int>& nums) {
    int n = nums.size();
    
    for (int &x : nums)
        if (x <= 0 || x > n) x = n + 1;
        
    for (int x : nums) {
        int num = std::abs(x);
        if (num <= n)
            nums[num - 1] = -std::abs(nums[num - 1]);
    }
    
    for (int i = 0; i < n; i++)
        if (nums[i] > 0)
            return i + 1;
            
    return n + 1;
}