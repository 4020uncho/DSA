#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n, 0);
        stack<int> st;
        int prevTime = 0;

        for (string log : logs) {
            int pos1 = log.find(':');
            int pos2 = log.find(':', pos1 + 1);

            int id = stoi(log.substr(0, pos1));
            string type = log.substr(pos1 + 1, pos2 - pos1 - 1);
            int time = stoi(log.substr(pos2 + 1));

            if (type == "start") {
                if (!st.empty()) {
                    res[st.top()] += time - prevTime;
                }
                st.push(id);
                prevTime = time;
            } 
            else {  // "end"
                res[st.top()] += time - prevTime + 1;
                st.pop();
                prevTime = time + 1;
            }
        }
        return res;
    }
};
int main() {
    Solution sol;

    int n = 2;
    vector<string> logs = {
        "0:start:0",
        "1:start:2",
        "1:end:5",
        "0:end:6"
    };

    vector<int> result = sol.exclusiveTime(n, logs);

    cout << "Exclusive time of each function:\n";
    for (int i = 0; i < result.size(); i++) {
        cout << "Function " << i << ": " << result[i] << endl;
    }

    return 0;
}