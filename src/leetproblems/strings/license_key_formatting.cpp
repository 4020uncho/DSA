//only the logic part
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string result;
        int count = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '-') continue;

            result.push_back(toupper(s[i]));
            count++;

            if (count == k) {
                result.push_back('-');
                count = 0;
            }
        }
        if (!result.empty() && result.back() == '-') {
            result.pop_back();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
