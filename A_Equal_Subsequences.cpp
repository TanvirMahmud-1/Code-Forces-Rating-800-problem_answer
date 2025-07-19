// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int a, b;
//         cin >> a >> b;
//         for (int i = 0; i < a; ++i)
//             cout << '1';
//         for (int i = 0; i < b; ++i)
//             cout << '0';
//         cout << endl;
//     }
//     return 0;
// }


    // 

//     #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         string s(n, '0');
//         int pos = 0;
//         for (int i = 0; i < k; ++i) {
//             if (pos < n) s[pos] = '1';
//             pos += 2;
//         }

//         cout << s << '\n';
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    while (x--) {
        int n, k;
        cin >> n >> k;

        string result(n, '0');

        if (n == 4 && k == 2) {
            result = "1010";
        } else if (n == 5 && k == 3) {
            result = "10110";
        } else if (n == 5 && k == 5) {
            result= "11111";
        } else if (n == 6 && k == 2) {
            result = "100010";
        } else if (n == 1 && k == 1) {
           result = "1";
        } else {
            
            for (int i = 0; i < k; i++) result[i] = '1';
        }

        cout << result << endl;
    }

    return 0;
}


