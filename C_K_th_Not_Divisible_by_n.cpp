// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     int a, b;
//     while (t--)
//     {
//         cin >> a >> b;
//         int res_1 = a - 1;
//         int res_2 = b - 1;
//         int difference = res_2 / res_1;
//         int ans = b + difference;
//         cout << ans << endl;
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
        long long n, k;
        cin >> n >> k;

        long long ans = {k + (k - 1) / (n - 1)};
        cout << ans << endl;
    }

    return 0;
}
