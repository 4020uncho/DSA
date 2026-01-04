#include <iostream>
#include <string>
using namespace std;

int repeatedStringMatch(string a, string b) {
    string s = "";
    int count = 0;

    while (s.length() < b.length()) {
        s += a;
        count++;
    }

  
    if (s.find(b) != string::npos)
        return count;

    
    s += a;
    count++;

    if (s.find(b) != string::npos)
        return count;

    return -1;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << repeatedStringMatch(a, b);
    return 0;
}
