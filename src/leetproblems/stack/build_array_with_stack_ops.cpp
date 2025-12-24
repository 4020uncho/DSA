#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        int curr = 1;

        for (int i = 0; i < target.size(); i++) {
            while (curr < target[i]) {
                ops.push_back("Push");
                ops.push_back("Pop");
                curr++;
            }
            ops.push_back("Push");
            curr++;
        }
        return ops;
    }
};

int main() {
    Solution sol;

    int size, n;
    cout << "Enter target array size: ";
    cin >> size;

    vector<int> target(size);
    cout << "Enter target elements (strictly increasing): ";
    for (int i = 0; i < size; i++) {
        cin >> target[i];
    }

    cout << "Enter n: ";
    cin >> n;

    vector<string> result = sol.buildArray(target, n);

    cout << "Stack Operations:\n";
    for (string &op : result) {
        cout << op << " ";
    }
    cout << endl;

    return 0;
}
