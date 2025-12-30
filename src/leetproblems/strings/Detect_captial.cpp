#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        
        bool allUpper = true;
        bool allLower = true;
        bool firstUpperRestLower = true;
        
        for (char c : word) {
            if (!isupper(c)) allUpper = false;
            if (!islower(c)) allLower = false;
        }
        
        if (!isupper(word[0])) {
            firstUpperRestLower = false;
        } else {
            for (int i = 1; i < n; i++) {
                if (!islower(word[i])) {
                    firstUpperRestLower = false;
                    break;
                }
            }
        }
        
        return allUpper || allLower || firstUpperRestLower;
    }
};
