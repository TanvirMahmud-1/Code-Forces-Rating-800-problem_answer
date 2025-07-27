// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int m, n;
//         cin >> m >> n;

//         if (m == 1 || n == 1)
//             cout << "NO" << endl;
//         else
//             cout << "YES" << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         if (n == 1 || m == 1)
//             cout << "NO\n";
//         else
//             cout << "YES\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a == 1 || b == 1)
            cout << "NO" << endl;

        else if (a == 2 && b == 2)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }
}
