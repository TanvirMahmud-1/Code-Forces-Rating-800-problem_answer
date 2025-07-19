// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;

//         int year = (s[0] - '0') * 1000 +
//                    (s[1] - '0') * 100 +
//                    (s[2] - '0') * 10 +
//                    (s[3] - '0');

//         int a = (s[0] - '0') * 10 + (s[1] - '0');
//         int b = (s[2] - '0') * 10 + (s[3] - '0');

//         int sum = a + b;
//         if (sum * sum == year) {
//             cout << a << " " << b << endl;
//         } else {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int year = (s[0] - '0') * 1000 +
                   (s[1] - '0') * 100 +
                   (s[2] - '0') * 10 +
                   (s[3] - '0');

        int a = (s[0] - '0') * 10 + (s[1] - '0');
        int b = (s[2] - '0') * 10 + (s[3] - '0');
        int sum = a + b;

        bool found = false;

        if (sum * sum == year) {
            cout << a << " " << b << endl;
            found = true;
        } else {
            for (int i = 0; i <= 100 && !found; ++i) {
                for (int j = 0; j <= 100; ++j) {
                    if ((i + j) * (i + j) == year) {
                        cout << i << " " << j << endl;
                        found = true;
                        break;
                    }
                }
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
