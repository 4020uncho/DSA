// Palindrome Number for the local testing purpose 

#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0) return false;
    int reverse = 0;
  
    // Copy of the original number so that the original
    // number remains unchanged while finding the reverse
    int temp = n; 
    while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    
    // If reverse is equal to the original number,
    // the number is palindrome
    return (reverse == n);
}

int main() {
    int n;
    cin >> n;
    if (isPalindrome(n) == 1) {
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}

//code for leetcode problem , which can be used in leetcode platform
/*
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long reverse = 0;
        int xcopy = x;

        while (x > 0) {
            reverse = (reverse * 10) + (x % 10);
            x /= 10;
        }

        return reverse == xcopy;        
    }
};*/