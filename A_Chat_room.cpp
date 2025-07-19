#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    string target = "hello";
    int j = 0;
 
    for (char c : s) {
        if (c == target[j]) {
            j++;
            if (j == (int)target.size()) break;
        }
    }
 
    cout << (j == (int)target.size() ? "YES\n" : "NO\n");
    return 0;
}