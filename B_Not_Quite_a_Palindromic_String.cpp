// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;

//         string s;
//         cin >> s;

//         int goodPairs = 0;
//         for (int i = 0; i < n / 2; ++i)
//         {
//             if (s[i] == s[n - i - 1])
//                 goodPairs++;

//         }

//         int neededChanges;
//         if(goodPairs >= k)
//              neededChanges = goodPairs - k;
//         else
//              neededChanges = k - goodPairs;

//         if (neededChanges <= n / 2)
//         {
//             cout << "YES\n";
//         }
//          else
//         {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         string s; cin >> s;

//         int zeroCount = 0;
//         for (char c : s) if (c == '0') zeroCount++;

//         int oneCount = n - zeroCount;
//         int half = n / 2;
//         bool possible = false;

//         for (int x = 0; x <= k; x++) {
//             int y = k - x;
//             int zerosNeeded = 2 * x + (half - k);
//             int onesNeeded = 2 * y + (half - k);

//             if (zerosNeeded <= zeroCount && onesNeeded <= oneCount) {
//                 possible = true;
//                 break;
//             }
//         }

//         cout << (possible ? "YES\n" : "NO\n");
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int zeroCount = count(s.begin(), s.end(), '0');
        int oneCount = n - zeroCount;
        int half = n / 2;
        bool possible = false;

        for (int x = 0; x <= k; x++) {
            int zerosNeeded = 2 * x + (half - k);
            int onesNeeded = 2 * (k - x) + (half - k);

            if (zerosNeeded <= zeroCount && onesNeeded <= oneCount) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
