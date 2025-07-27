// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long n, a, b, c;
//     cin >> n >> a >> b >> c;

//     long long ans = 0;

//     while (true)
//     {

//         if (n >= b && (b - c) < a)
//         {
//             n -= b;
//             ans++;

//             long long refill = n / (b - c);
//             ans += refill;
//             n -= refill * (b - c);
//         }
//         else if (n >= a)
//         {
//             long long plastic = n / a;
//             ans += plastic;
//             break;
//         }
//         else
//             break;

//     }

//     cout << ans << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long n, a, b, c;
//     cin >> n >> a >> b >> c;

//     long long ans = 0;

//     if (b - c < a && b > c)
//     {
//         while (n >= b)
//         {
//             n -= b;
//             ans++;
//             n += c;
//         }
//     }

//     ans += n / a;
//     n %= a;

//     cout << ans << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    if (b - c >= a || n < b)
    {
        cout << n / a << endl;
        return 0;
    }

    long long liters = 0;
    n -= b;
    liters++;
    liters += n / (b - c);
    n %= (b - c);
    n += c;
    liters += n / a;

    cout << liters << "\n";
    return 0;
}
