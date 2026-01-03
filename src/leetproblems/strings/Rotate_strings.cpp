#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length())
        return false;

    string doubled = s + s;
    return doubled.find(goal) != string::npos;
}

int main() {
    string s = "abcde";
    string goal = "cdeab";

    if (rotateString(s, goal))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
