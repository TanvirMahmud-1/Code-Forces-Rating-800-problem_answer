#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    int a[50];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int score = a[k - 1], count = 0;
    for (int i = 0; i < n; ++i)
        if (a[i] >= score && a[i] > 0)
            ++count;
    cout << count << '\n';
    return 0;
}