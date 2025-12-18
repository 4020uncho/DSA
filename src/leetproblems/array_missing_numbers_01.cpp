#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] > 0)
            nums[idx] = -nums[idx];
    }

    vector<int> result;

    
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0)
            result.push_back(i + 1);
    }

    return result;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> missing = findDisappearedNumbers(nums);

    cout << "Missing numbers: ";
    for (int x : missing)
        cout << x << " ";

    return 0;
}
