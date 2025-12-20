#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string &token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else st.push(a / b);   // integer division
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
int main() {
    Solution sol;

    
    vector<string> tokens = {"2", "1", "+", "3", "*"};//example

    int result = sol.evalRPN(tokens);

    cout << "Result: " << result << endl;

    return 0;
}
