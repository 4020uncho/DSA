#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string maskPII(string s) {
    
        if (s.find('@') != string::npos) {
            string res;
            for (char &c : s) c = tolower(c);

            int at = s.find('@');
            res += s[0];
            res += "*****";
            res += s[at - 1];
            res += s.substr(at);

            return res;
        }

        
        string digits;
        for (char c : s) {
            if (isdigit(c)) digits += c;
        }

        string last4 = digits.substr(digits.size() - 4);
        int countryLen = digits.size() - 10;

        string res;
        if (countryLen > 0) {
            res += "+";
            res += string(countryLen, '*');
            res += "-";
        }

        res += "***-***-" + last4;
        return res;
    }
};

int main() {
    Solution sol;
    cout << sol.maskPII("LeetCode@LeetCode.com") << endl;
    cout << sol.maskPII("+1 (234) 567-8900") << endl;
    return 0;
}
