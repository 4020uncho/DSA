#include <iostream>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    long long n = nums.size();
    long long sum = 0, sqSum = 0;

    for (int num : nums) {
        sum += num;
        sqSum += (long long)num * num;
    }

    long long expectedSum = n * (n + 1) / 2;
    long long expectedSqSum = n * (n + 1) * (2 * n + 1) / 6;

    long long diff = sum - expectedSum;              // d - m
    long long sqDiff = sqSum - expectedSqSum;        // d² - m²

    long long add = sqDiff / diff;                   // d + m

    int duplicate = (diff + add) / 2;
    int missing = duplicate - diff;

    return {duplicate, missing};
}

int main() {
    vector<int> nums = {1, 2, 2, 4};

    vector<int> result = findErrorNums(nums);

    cout << "Duplicate: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;

    return 0;
}
