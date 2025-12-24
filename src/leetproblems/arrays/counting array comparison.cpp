//leet problems
#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> result; // Step 1: result array

    for (int i = 0; i < nums.size(); i++) { // Step 2: loop through each element
        int count = 0; // Step 3: initialize counter for current number

        for (int j = 0; j < nums.size(); j++) { // Step 3: compare with every other element
            if (nums[j] < nums[i]) { // Step 4: if smaller, increment counter
                count++;
            }
        }

        result.push_back(count); // Step 5: add count to result
    }

    return result; // Step 7: return the final array
}

int main() {
    vector<int> nums = {8, 1, 2, 2, 3};
    vector<int> res = smallerNumbersThanCurrent(nums);

    for (int x : res) {
        cout << x << " "; // Output the results
    }

    return 0;
}
