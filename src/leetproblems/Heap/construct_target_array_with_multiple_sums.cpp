//only logic for leetproblem : Construct Target Array With Multiple Sums
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long> pq;
        long long totalSum = 0;

        for (int x : target) {
            pq.push(x);
            totalSum += x;
        }

        while (true) {
            long long largest = pq.top();
            pq.pop();

            long long restSum = totalSum - largest;

            if (largest == 1 || restSum == 1)
                return true;

            if (restSum == 0 || largest <= restSum)
                return false;

            long long updated = largest % restSum;
            if (updated == 0)
                return false;

            pq.push(updated);
            totalSum = restSum + updated;
        }
    }
};
