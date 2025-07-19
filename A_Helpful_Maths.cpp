#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    vector<char> digits;
    for (char c : s) {
        if (c != '+') digits.push_back(c);
    }
    sort(digits.begin(), digits.end());
    for (size_t i = 0; i < digits.size(); ++i) {
        if (i > 0) cout << '+';
        cout << digits[i];
    }
    return 0;
}